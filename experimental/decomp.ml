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

let evalexpr ram expr =
    let rec fold expr = match expr with
    | RAMByte(Const(a)) -> (try Hashtbl.find ram a with Not_found -> InputByte(a))
    | RAMByte(e) -> (RAMByte(fold e))
    | RAMWord(e) -> fold (OR(RAMByte(e),LShift(RAMByte(Sum(e,Const(1))),8)))
    | OR(InputByte(a),LShift(InputByte(b),8)) when b==(a+1) -> InputWord(a)

    | OR(a,Const(0)) -> fold a
    | OR(Const(0),a) -> fold a
    | OR(RAMByte(_),Const(0xff)) -> Const(0xff)
    | OR(Const(0xff),RAMByte(_)) -> Const(0xff)
    | AND(_,Const(0)) -> Const(0)
    | AND(Const(0),_) -> Const(0)

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
        if (e2 == e) || (n>20) then
            e2
        else
(*            (printf "fold: %s -> %s\n" (string_of_expr e) (string_of_expr e2);
            dofold (n+1) e2) *)
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

    (match dst with
    | RAMByte(Const(n)) -> Hashtbl.add __ram n seval
    | RAMWord(Const(n)) -> (Hashtbl.add __ram n (evalexpr __ram (AND(seval, Const(0xff))));
                            Hashtbl.add __ram (n+1) (evalexpr __ram (RShift(seval, 8))))
(*    | _ -> printf "unable to assign to %s\n" (string_of_expr dst)); *)
    | _ -> ());
    (dst, seval)
;;

let rec dasmchunk binfile addr _dd =
    if addr > 0x7ff0 then 
        () 
    else begin
        printf "%04x:" addr; flush stdout;
        let (ssa,op,dd,newaddrs) = get_disassembly binfile addr _dd in
        let ssa2 = evalssa ssa in
        begin
            printf "%04x: " newaddrs.(0); flush stdout;
            printf "%-25s: " op; flush stdout;
            printf "%s\n" (string_of_ssa ssa2); flush stdout;
            dasmchunk binfile newaddrs.(0) dd
        end
    end
;;

dasmchunk binfile 0x21E2 0;;
dasmchunk binfile 0x5010 0;;

