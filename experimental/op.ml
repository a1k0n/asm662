open Arch;;

let makes8 s8 =
    if s8 >= 128 then s8-256 else s8
;;

let make16 nl nh =
    (nh*256) + nl
;;

(* ---generate--- *)

let get_jump_target addr op n =
    match op with
    | ROMAddr16 (n16) -> n16
    | ROMRel8 (s8) -> addr+s8+n
    | _ -> 0xffff
;;

let get_disassembly buf addr dd =
    let (op, newaddr, dd) = get_op buf addr dd in
    let opname = get_op_name op
    and opssa = get_op_ssa addr op in
    match newaddr with
    Simple (n) -> (opssa, opname, dd, [|addr+n|])
    | Conditional (n, jop) | Call (n, jop) -> let 
        jtarget = get_jump_target addr jop n in 
        (opssa, opname ^ " -> " ^ (Printf.sprintf "%04x" jtarget), dd, [|addr+n; jtarget|])
    | Jump (n, jop) -> let jtarget=get_jump_target addr jop n in 
        (opssa, opname ^ " -> " ^ (Printf.sprintf "%04x" jtarget), dd, [|jtarget|])
    | _ -> (opssa, opname, dd, [|0x8000|])
;;

