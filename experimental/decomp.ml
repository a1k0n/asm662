open Printf
open Opcode
open Ssa

let read_whole_chan chan =
    let chunksiz = 4096 in
    let buf = Buffer.create chunksiz in
    let str = String.create chunksiz in
    let rec loop () =
        let len = input chan str 0 chunksiz in
        match len with
        0 -> Buffer.contents buf
        | x when x = chunksiz -> Buffer.add_string buf str; loop()
        | _ -> Buffer.add_substring buf str 0 len; Buffer.contents buf
        in
    loop ()
;;

let read_whole_file filename =
    let chan = open_in filename in
    read_whole_chan chan
;;

let filename = Sys.argv.(1);;

let binfile = read_whole_file filename;;

let rec expreq e1 e2 =
    match (e1,e2) with
    | (Const(a),Const(b)) -> a == b
    | (InputByte(a),InputByte(b)) -> a == b
    | (InputWord(a),InputWord(b)) -> a == b
    | (RAMByte(ex1),RAMByte(ex2)) -> expreq ex1 ex2
    | (RAMWord(ex1),RAMWord(ex2)) -> expreq ex1 ex2
    | (ROMByte(ex1),ROMByte(ex2)) -> expreq ex1 ex2
    | (ROMWord(ex1),ROMWord(ex2)) -> expreq ex1 ex2
    | (Bit(ex1,n1),Bit(ex2,n2)) -> (n1 == n2) && expreq ex1 ex2
    | (Sum(ex1,ex2),Sum(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (Diff(ex1,ex2),Diff(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (Prod(ex1,ex2),Prod(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (Quot(ex1,ex2),Quot(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (AND(ex1,ex2),AND(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (OR(ex1,ex2),OR(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (XOR(ex1,ex2),XOR(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (Less(ex1,ex2),Less(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (Equal(ex1,ex2),Equal(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (LessOrEqual(ex1,ex2),LessOrEqual(ex3,ex4)) -> expreq ex1 ex3 && expreq ex2 ex4
    | (LShift(ex1,n1),LShift(ex2,n2)) -> (n1 == n2) && expreq ex1 ex2
    | (RShift(ex1,n1),RShift(ex2,n2)) -> (n1 == n2) && expreq ex1 ex2
    | _ -> false
;;

let evalexpr ram expr =
    let rec fold expr = match expr with
    | RAMByte(Const(a)) -> (try Hashtbl.find ram a with Not_found -> InputByte(a))
    | RAMByte(e) -> (RAMByte(fold e))
    | RAMWord(e) -> fold (OR(RAMByte(e),LShift(RAMByte(Sum(e,Const(1))),8)))
    | ROMByte(e) -> (ROMByte(fold e))
    | ROMWord(e) -> (ROMWord(fold e))
    | OR(InputByte(a),LShift(InputByte(b),8)) when b==(a+1) -> InputWord(a)

    (* ((e & 0xff) | ((e >> 0x8) << 0x8)) *)
    | OR(AND(e,Const(0xff)),LShift(RShift(e2,8),8)) when (expreq e e2) -> fold e
    (* (e & 0xff) >> 8 -> 0 *)
    | RShift(AND(_,Const(0xff)),8) -> Const(0)
    | RShift(RAMByte(_),8) -> Const(0)
    | RShift(InputByte(_),8) -> Const(0)

    | OR(a,Const(0)) -> fold a
    | OR(Const(0),a) -> fold a
    | OR(RAMByte(_),Const(0xff)) -> Const(0xff)
    | OR(Const(0xff),RAMByte(_)) -> Const(0xff)
    | AND(_,Const(0)) -> Const(0)
    | AND(Const(0),_) -> Const(0)

    | OR(OR(ex,Const(n1)),Const(n2)) -> AND(fold ex,Const(n1 lor n2))
    | AND(AND(ex,Const(n1)),Const(n2)) -> AND(fold ex,Const(n1 land n2))

    | Sum(Const(a),Const(b)) -> Const(a+b)
    | Diff(Const(a),Const(b)) -> Const(a-b)
    | Prod(Const(a),Const(b)) -> Const(a*b)
    | Quot(Const(a),Const(b)) -> Const(a/b)
    | AND(Const(a),Const(b)) -> Const(a land b)
    | OR(Const(a),Const(b)) -> Const(a lor b)
    | XOR(Const(a),Const(b)) -> Const(a lxor b)
    | Less(Const(a),Const(b)) -> Const(if a<b then 1 else 0)
    | Equal(Const(a),Const(b)) -> Const(if a==b then 1 else 0)
    | LessOrEqual(Const(a),Const(b)) -> Const(if a<=b then 1 else 0)
    | LShift(Const(a),n) -> Const(a lsl n)
    | RShift(Const(a),n) -> Const(a lsr n)

    | Sum(a,b) -> Sum(fold a, fold b)
    | Diff(a,b) -> Diff(fold a, fold b)
    | Prod(a,b) -> Prod(fold a, fold b)
    | Quot(a,b) -> Quot(fold a, fold b)
    | AND(a,b) -> AND(fold a, fold b)
    | OR(a,b) -> OR(fold a, fold b)
    | XOR(a,b) -> XOR(fold a, fold b)
    | Less(a,b) -> Less(fold a, fold b)
    | Equal(a,b) -> Equal(fold a, fold b)
    | LessOrEqual(a,b) -> LessOrEqual(fold a, fold b)
    | LShift(a,n) -> LShift(fold a,n)
    | RShift(a,n) -> RShift(fold a,n)

    | _ -> expr 

    in

    let rec dofold n e =
        let e2 = fold e in
        if (expreq e e2) || (n>20) then
            e2
        else
            (*printf "fold: %s -> %s\n" (string_of_expr e) (string_of_expr e2);
            dofold (n+1) e2*)
            dofold (n+1) e2
    in

    dofold 0 expr
;;

let __ram = Hashtbl.create 384;;

let evalssa op =
    let (dst_,src) = op in
    let seval = evalexpr __ram src in

    let dst = match dst_ with
    | RAMByte(e) -> RAMByte(evalexpr __ram e)
    | RAMWord(e) -> RAMWord(evalexpr __ram e)
    | _ -> dst_
    in

    (dst, seval)
;;

let applyssa op =
    let (dst,seval) = op in
    (match dst with
    | RAMByte(Const(n)) -> Hashtbl.add __ram n seval
    | RAMWord(Const(n)) -> (Hashtbl.add __ram n (AND(seval, Const(0xff)));
                            Hashtbl.add __ram (n+1) (RShift(seval, 8)))
    | _ -> ())
;;

let rec dasmchunk binfile addr _dd =
    if addr > 0x7ff0 then 
        () 
    else begin
        let (ssa,op,dd,newaddrs) = get_disassembly binfile addr _dd in
        let crap = ref (Printf.sprintf "%04x: %-25s" addr op) in
        let ssa2apply = List.map(fun sa -> 
            let ssa2 = evalssa sa in
            begin
                printf "%s: %s\n" !crap (string_of_ssa ssa2);
                flush stdout;
                crap := Printf.sprintf "%-31s" ""
            end; ssa2) ssa in
        List.iter applyssa ssa2apply;
        dasmchunk binfile newaddrs.(0) dd
    end
;;

dasmchunk binfile 0x21e9 0;;
dasmchunk binfile 0x238b 0;;
dasmchunk binfile 0x5010 0;;

