open Printf
open Opcode
open Ssa
open List

let mkaddrlist l =
    fold_left (fun x y -> x ^ " " ^ (sprintf "%04x" y)) "" !l

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
    let chan = open_in_bin filename in
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
        let crap = ref (sprintf "%04x: %-25s" addr op) in
        let ssa2apply = map(fun sa -> 
            let ssa2 = evalssa sa in
            begin
                printf "%s: %s\n" !crap (string_of_ssa ssa2);
                flush stdout;
                crap := sprintf "%-31s" ""
            end; ssa2) ssa in
        iter applyssa ssa2apply;
        dasmchunk binfile newaddrs.(0) dd
    end
;;

(*
dasmchunk binfile 0x21e9 0;;
dasmchunk binfile 0x238b 0;;
dasmchunk binfile 0x5010 0;;
dasmchunk binfile 0x5063 0;;
*)

let make16 nl nh =
    (nh*256) + nl
;;

let get_vec_addr buf addr =
    make16 (int_of_char buf.[addr]) (int_of_char buf.[addr+1])
;;

let cfg binfile addr =
    let insn_in = Hashtbl.create 4096 and
        insn_out = Hashtbl.create 4096 in
    let add_edge fromaddr toaddr =
        try 
            let inlist = Hashtbl.find insn_in toaddr in
                inlist := fromaddr :: !inlist
        with Not_found ->
            Hashtbl.add insn_in toaddr (ref [fromaddr])
    in
        
    let rec cfgloop addr _dd depth =
        (*printf "cfgloop %04x depth %d\n" addr depth;*)
        if addr > 0x7ff0 then () 
        else try Hashtbl.find insn_out addr; ()
        with Not_found -> 
            let (ssa,op,dd,newaddrs) = get_disassembly binfile addr _dd in
            let n = Array.length newaddrs in
            Hashtbl.add insn_out addr (ref (Array.to_list newaddrs));
            Array.iter (fun toaddr -> add_edge addr toaddr) newaddrs;
            (if n>1 then cfgloop newaddrs.(1) dd (depth+1));
            cfgloop newaddrs.(0) dd depth
            
    in
    Hashtbl.add insn_out 0 (ref [addr]);
    add_edge 0 addr;
    cfgloop addr 0 0;
    (insn_in,insn_out)
;;

(*
type cfgnode = CFGNode of int * cfgnode list * cfgnode list;;

let fixup_cfg cfg origin =
    let (insn_in, insn_out) = cfg in
    let h = Hashtbl.create 1024 in
    let rec makenode addr =
        try Hashtbl.find h addr
        with Not_found ->
            let n = newnode addr in
            Hashtbl.add h addr n; n

        and newnode addr =
            let o = if Hashtbl.mem insn_out addr then
                !(Hashtbl.find insn_out addr)
            else [] in
            let i = if Hashtbl.mem insn_in addr then
                !(Hashtbl.find insn_in addr)
            else [] in
                CFGNode (addr, map makenode i, map makenode o)
    in
    makenode origin
;; *)

let display_cfg cfg =
    let (insn_in, insn_out) = cfg in
    let cfgdisplay addr o =
        try
            let i = Hashtbl.find insn_in addr in
            printf "%20s -> %04x ->%s\n" (mkaddrlist i) addr (mkaddrlist o)
        with Not_found ->
            printf "%20s -> %04x ->%s\n" "???" addr (mkaddrlist o)
    in
    Hashtbl.iter cfgdisplay insn_out
;;

let display_dot nodes cfg =
    let (insn_in, insn_out) = cfg in
    let get_succ addr =
        try Hashtbl.find insn_out addr
        with Not_found -> ref [] in
    let cfgdisplay addr =
        let o = get_succ addr in
        iter (fun x -> if x != 0x8000 then printf "\t\"%04x\" -> \"%04x\";\n" addr x) !o
    in
    printf "digraph duh {\n";
    iter cfgdisplay nodes;
    printf "}\n"
;;

let fixup_cfg cfg origin =
    let (insn_in, insn_out) = cfg in
    let h = ref [] in
    let worklist = ref [origin] in

    let get_succ addr =
        try Hashtbl.find insn_out addr
        with Not_found -> ref [] in

    let get_pred addr =
        try Hashtbl.find insn_in addr
        with Not_found -> ref [] in

        (* if there is only one successor AND that successor has only one
         * predecessor, merge it with this node.
         * do this until you can't anymore, then return a list of all
         * successors to the worklist. *)
    let rec fixup baseaddr addr =
        let succ = get_succ addr in
        if length !succ == 1 then
            let saddr = hd !succ in
            let pred = get_pred saddr in
            if length !pred == 1 then
                (* replace the successors of this node with the successors
                 * of the next node, and repeat *)
                begin
                    let s = get_succ baseaddr in
                    s := !(get_succ saddr);
(*printf " -> successors of %04x: %s\n" baseaddr (mkaddrlist s);*)
                    fixup baseaddr saddr
                end
            else
                !succ
        else
            !succ
    in

    let fin = Hashtbl.create 128 in
    let rec workloop () =
        try
            let n = hd !worklist in
            if Hashtbl.mem fin n then begin
                worklist := tl !worklist;
                workloop ()
            end
            else begin
                Hashtbl.add fin n 1;
                h := n :: !h;
                worklist := (fixup n n) @ (tl !worklist);
(*printf "successors of %04x: %s\n" n (mkaddrlist (get_succ n));*)
                workloop ()
            end
        with Failure _ -> ()
    in

    workloop ();
    !h
;;

let origin = get_vec_addr binfile 0x36 in
(*let origin = get_vec_addr binfile 0 in*)
(*let origin = 0x5010 in*)
(*display_cfg (cfg binfile origin);*)
let cfg = cfg binfile origin in
let nodes = fixup_cfg cfg origin in
display_dot nodes cfg;;

