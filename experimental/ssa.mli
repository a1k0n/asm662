(* expressions in decompilation *)

type expression =
    | Const of int
    | InputByte of int
    | InputWord of int
    | RAMByte of expression      (* (byte)ram[expr] *)
    | RAMWord of expression      (* (word)ram[expr] *)
    | ROMByte of expression      (* (byte)rom[expr] *)
    | ROMWord of expression      (* (word)rom[expr] *)
    | Bit of expression * int (* expr.int *)
    | Sum of expression * expression
    | Diff of expression * expression
    | Prod of expression * expression
    | Quot of expression * expression
    | AND of expression * expression
    | OR of expression * expression
    | XOR of expression * expression
    | Less of expression * expression
    | Equal of expression * expression
    | LessOrEqual of expression * expression
    | LShift of expression * int
    | RShift of expression * int
;;

type ssa_expression = expression * expression;;

val string_of_expr : expression -> string;;
val string_of_ssa : ssa_expression -> string;;

