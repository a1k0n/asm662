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

type ssa_expression = expression * expression;;

let rec string_of_expr e =
    let binop e1 e2 str = 
        "("^(string_of_expr e1)^str^(string_of_expr e2)^")" in
    match e with
    | Const (n) -> Printf.sprintf "0x%x" n
    | RAMWord(Sum(Const(0x80),LShift(AND(RAMByte(Const(4)),Const(7)),3))) -> "X1"
    | RAMWord(Sum(Sum(Const(0x80),LShift(AND(RAMByte(Const(4)),Const(7)),3)),Const(2))) -> "X2"
    | RAMWord(Sum(Sum(Const(0x80),LShift(AND(RAMByte(Const(4)),Const(7)),3)),Const(4))) -> "DP"
    | RAMWord(Sum(Sum(Const(0x80),LShift(AND(RAMByte(Const(4)),Const(7)),3)),Const(6))) -> "USP"
    | RAMByte(Sum(OR(AND(LShift(RAMWord(Const(2)),3),Const(0xff)),LShift(AND(RAMWord(Const(2)), Const(0x1f)), 3)),Const(n))) -> "r" ^ (string_of_int n)
    | RAMWord(Sum(OR(AND(LShift(RAMWord(Const(2)),3),Const(0xff)),LShift(AND(RAMWord(Const(2)), Const(0x1f)), 3)),Const(n))) -> "er" ^ (string_of_int (n/2))
    | OR(AND(LShift(RAMWord(Const(2)),3),Const(0xff)),LShift(AND(RAMWord(Const(2)), Const(0x1f)), 3)) -> "regbase"
    | Sum(Const(0x80),LShift(AND(RAMByte(Const(4)),Const(7)),3)) -> "prbase"
    | AND(LShift(RAMWord(Const(2)),3),Const(0xff)) -> "page"
    | AND(RAMByte(Const(4)),Const(7)) -> "scb"
    | RAMWord(Const(0)) -> "ssp"
    | RAMWord(Const(2)) -> "lrb"
    | RAMWord(Const(4)) -> "psw"
    | RAMByte(Const(4)) -> "pswl"
    | RAMByte(Const(5)) -> "pswh"
    | RAMWord(Const(6)) -> "A"
    | RAMByte(Const(6)) -> "AL"
    | RAMByte(Const(7)) -> "AH"
    | InputByte (n) -> Printf.sprintf "ramb_in[%02x]" n
    | InputWord (n) -> Printf.sprintf "ramw_in[%02x]" n
    | RAMByte (expr) -> "ramb[" ^ (string_of_expr expr) ^ "]"
    | RAMWord (expr) -> "ramw[" ^ (string_of_expr expr) ^ "]"
    | ROMByte (expr) -> "romb[" ^ (string_of_expr expr) ^ "]"
    | ROMWord (expr) -> "romw[" ^ (string_of_expr expr) ^ "]"
    | Bit (expr,n) -> (string_of_expr expr) ^ "." ^ (string_of_int n)
    | Sum (e1,e2) -> binop e1 e2 " + "
    | Diff (e1,e2) -> binop e1 e2 " - "
    | Prod (e1,e2) -> binop e1 e2 " * "
    | Quot (e1,e2) -> binop e1 e2 " / "
    | AND (e1,e2) -> binop e1 e2 " & "
    | OR (e1,e2) -> binop e1 e2 " | "
    | XOR (e1,e2) -> binop e1 e2 " ^ "
    | Less (e1,e2) -> binop e1 e2 " < "
    | Equal (e1,e2) -> binop e1 e2 " == "
    | LessOrEqual (e1,e2) -> binop e1 e2 " <= "
    | LShift (e1,n) -> binop e1 (Const(n)) " << "
    | RShift (e1,n) -> binop e1 (Const(n)) " >> "
;;

let string_of_ssa e =
    let (e1,e2) = e in
    (string_of_expr e1) ^ " = " ^ (string_of_expr e2)
;;

