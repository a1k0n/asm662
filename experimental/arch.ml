open Ssa

type operand = 
    (* Registers *) 
      Acc (* A *) 
    | Rn of int | ERn of int (* r0-r7, er0-er3 *)
    | DP | X1 | X2 | USP | SSP
    | LRB | PSW | PSWH | PSWL 

    (* RAM access *)
    | OffPage of int  (* off N8 *)
    | ZeroPage of int (* N8 *)
    | USPRel of int (* S8[USP] *)
    | X1Rel of int | X2Rel of int (* N16[X1] *)
    | DPRel (* [DP] *)
    | Imm8 of int (* #N8 *)
    | Imm16 of int (* #N16 *)

    (* single bit operands *)
    | Zero (* zero flag *)
    | Carry (* C, carry flag *)
    | HalfCarry (* HC, sign flag? *)
    | DD (* data size register *)
    | Bit of operand * int (* operand.n *)

    (* ROM addresses (for LCb, CMPCb, J, CAL, etc *)
    | ROMRel8 of int (* PC-relative *)
    | ROMAddr16 of int (* simple N16 *)
    | ROMIndirect of operand (* [operand] *)
    | ROMOffsetIndirect of operand * int (* N16[operand] *)
;;

type nextaddr = Halt | Return | Simple of int | Jump of int * operand | 
    Call of int * operand | Conditional of int * operand
;;

let rec oprname = function
      Acc -> "A"
    | Zero -> "ZF"
    | Carry -> "C"
    | HalfCarry -> "HC"
    | DD -> "DD"
    | Rn (i) -> "r" ^ (string_of_int i)
    | ERn (i) -> "er" ^ (string_of_int i)
    | DP -> "DP" | X1 -> "X1" | X2 -> "X2" | USP -> "USP"
    | SSP -> "SSP" | LRB -> "LRB" | PSWH -> "PSWH" | PSWL -> "PSWL"
    | PSW -> "PSW"
    | DPRel -> "[DP]"
    | OffPage (n8) -> Printf.sprintf "off %02x" n8
    | ZeroPage (n8) -> Printf.sprintf "%02x" n8
    | USPRel (s8) -> Printf.sprintf "%02x[USP]" s8
    | X1Rel (n16) -> Printf.sprintf "%04x[X1]" n16
    | X2Rel (n16) -> Printf.sprintf "%04x[X2]" n16
    | Imm8 (imm8) -> Printf.sprintf "#%02x" imm8
    | Imm16 (imm16) -> Printf.sprintf "#%04x" imm16
    | Bit (opr, n) -> Printf.sprintf "%s.%d" (oprname opr) n
    | ROMRel8 (n8) -> Printf.sprintf "%02x" n8 (* wrong, of course *)
    | ROMAddr16 (n16) -> Printf.sprintf "%04x" n16
    | ROMIndirect (op) -> "[" ^ (oprname op) ^ "]"
    | ROMOffsetIndirect (op, n16) -> Printf.sprintf "%04x[%s]" n16 (oprname op)
;;

type opcode = OP_Invalid of int | OP_JEQ of operand
    | OP_OR of operand * operand | OP_POPS of operand
    | OP_CMPB of operand * operand | OP_DIV | OP_CMPC of operand * operand
    | OP_CLRB of operand | OP_ST of operand * operand
    | OP_ADC of operand * operand | OP_ADD of operand * operand
    | OP_LB of operand * operand | OP_LC of operand * operand
    | OP_MOV of operand * operand | OP_MOVB of operand * operand
    | OP_SBCB of operand * operand | OP_JNE of operand
    | OP_JBR of operand * operand | OP_JBS of operand * operand
    | OP_BRK | OP_CLR of operand | OP_SCAL of operand
    | OP_CMPCB of operand * operand | OP_DIVB | OP_RBR of operand
    | OP_TRB of operand | OP_STB of operand * operand | OP_SLL of operand
    | OP_DECB of operand | OP_ROLB of operand | OP_MB of operand * operand
    | OP_CAL of operand | OP_LCB of operand * operand | OP_PUSHS of operand
    | OP_VCAL0 | OP_JGE of operand | OP_VCAL1 | OP_VCAL2 | OP_VCAL3 
    | OP_nop76 | OP_VCAL4 | OP_XORB of operand * operand | OP_VCAL5 
    | OP_SWAP | OP_VCAL6 | OP_VCAL7 | OP_CMP of operand * operand
    | OP_EXTND | OP_JRNZ of operand * operand | OP_JGT of operand
    | OP_SUB of operand * operand | OP_ADCB of operand * operand
    | OP_J of operand | OP_SUBB of operand * operand
    | OP_L of operand * operand | OP_SLLB of operand | OP_NOP 
    | OP_ROL of operand | OP_MUL | OP_MULB | OP_SRLB of operand
    | OP_AND of operand * operand | OP_ROR of operand | OP_RB of operand
    | OP_RC | OP_SBC of operand * operand | OP_XOR of operand * operand
    | OP_INC of operand | OP_JLE of operand | OP_INCB of operand
    | OP_SWAPB | OP_MBR of operand * operand | OP_ORB of operand * operand
    | OP_SRA of operand | OP_DAA | OP_RT | OP_SBR of operand
    | OP_SRAB of operand | OP_XCHG of operand * operand | OP_JLT of operand
    | OP_ADDB of operand * operand | OP_XCHGB of operand * operand
    | OP_DEC of operand | OP_RTI | OP_SRL of operand
    | OP_XNBL of operand * operand | OP_ANDB of operand * operand
    | OP_RORB of operand | OP_SB of operand | OP_SC | OP_DAS 
    | OP_SJ of operand
;;

(* op: 66207 operand
 *  w: boolean - true if this is a word operation, false if byte *)
let rec op_to_expr w op =
    let ram a = if w then RAMWord(a) else RAMByte(a) in
    let rom a = if w then ROMWord(a) else ROMByte(a) in
    let sspreg = RAMWord(Const(0))
    and lrbreg = RAMWord(Const(2)) 
    and pswreg = RAMWord(Const(4))
    and pswlreg = RAMByte(Const(4))
    and pswhreg = RAMByte(Const(5)) in

    let page = AND(LShift(lrbreg, 3), Const(0xff00))
    and scb = AND(pswlreg,Const(7)) in

    let lrb = OR(page,LShift(AND(lrbreg, Const(0x1f)), 3)) in
    let pr = Sum(Const(0x80),LShift(scb, 3)) in

    let x1 = RAMWord(pr)
    and x2 = RAMWord(Sum(pr,Const(2)))
    and dp = RAMWord(Sum(pr,Const(4)))
    and usp = RAMWord(Sum(pr,Const(6))) in

    match op with
    | Acc -> ram(Const(6))
    | Carry -> Ssa.Bit(pswhreg, 7)
    | Zero -> Ssa.Bit(pswhreg, 6)
    | HalfCarry -> Ssa.Bit(pswhreg, 5)
    | DD -> Ssa.Bit (pswhreg, 4)
    | Bit (op, n) -> Ssa.Bit (op_to_expr w op, n)
    | SSP -> sspreg
    | LRB -> lrbreg
    | PSW -> pswreg
    | PSWL -> pswlreg
    | PSWH -> pswhreg
    | Rn (n) -> RAMByte(Sum(lrb,Const(n)))
    | ERn (n) -> RAMWord(Sum(lrb,Const(n*2)))
    | DP -> dp
    | X1 -> x1
    | X2 -> x2
    | USP -> usp
    | Imm8 (n) -> Const(n)
    | Imm16 (n) -> Const(n)
    | ZeroPage (n) -> ram(Const(n)) 
    | OffPage (n) -> ram(Sum(page, Const(n))) 
    | USPRel (n) -> ram(Sum(usp, Const(n)))
    | X1Rel (n) -> ram(Sum(x1, Const(n)))
    | X2Rel (n) -> ram(Sum(x2, Const(n)))
    | DPRel -> ram(dp)
    | ROMAddr16 (n) -> rom(Const(n))
    | ROMIndirect (op) -> rom(op_to_expr w op)
    | ROMOffsetIndirect (op, n) -> rom(Sum(op_to_expr w op, Const(n)))
    (* can't do ROMRel8 -- no PC, and i don't think we need it *)
    | _ -> raise Not_found
;;

let rec islvalue = function
    | Ssa.Bit (expr, _) -> islvalue expr
    | RAMByte (_) -> true
    | RAMWord (_) -> true
    | _ -> false

let get_op_ssa addr op =
    match op with
    | OP_CLR (o) -> [(op_to_expr true o, Const (0))]
    | OP_CLRB (o) -> [(op_to_expr false o, Const (0))]
    | OP_L (a, o) -> [(op_to_expr true a, op_to_expr true o); 
        (op_to_expr false Zero, Equal(op_to_expr true o, Const(0)))]
    | OP_LB (a, o) -> [(op_to_expr false a, op_to_expr false o); 
        (op_to_expr false Zero, Equal(op_to_expr false o, Const(0)))]
    | OP_LC (a, o) -> [(op_to_expr true a, op_to_expr true o);
        (op_to_expr false Zero, Equal(op_to_expr true o, Const(0)))]
    | OP_LCB (a, o) -> [(op_to_expr false a, op_to_expr false o);
        (op_to_expr false Zero, Equal(op_to_expr false o, Const(0)))]
    | OP_ST (a, o) -> [(op_to_expr true o, op_to_expr true a)]
    | OP_STB (a, o) -> [(op_to_expr false o, op_to_expr false a)]
    | OP_MOV (o1, o2) -> [(op_to_expr true o1, op_to_expr true o2)]
    | OP_MOVB (o1, o2) -> [(op_to_expr false o1, op_to_expr false o2)]
    | OP_SB (o) -> [(op_to_expr false o, Const(1));
        (op_to_expr false Zero, Equal(op_to_expr false o, Const(0)))]
    | OP_RB (o) -> [(op_to_expr false o, Const(0));
        (op_to_expr false Zero, Equal(op_to_expr false o, Const(0)))]
    | OP_MB (o1, o2) -> [(op_to_expr false o1, op_to_expr false o2)]
    | OP_ADD (o1, o2) -> [
        (op_to_expr true o1, Sum((op_to_expr true o1),(op_to_expr true o2)));
        (op_to_expr false Zero, Equal(AND(Sum((op_to_expr true o1),
            (op_to_expr true o2)),Const(0xffff)),Const(0)));
        (op_to_expr false Carry, RShift(Sum((op_to_expr true o1),
            (op_to_expr true o2)),16))]
    | OP_ADDB (o1, o2) -> [
        (op_to_expr false o1, Sum((op_to_expr false o1),(op_to_expr false o2)));
        (op_to_expr false Zero, Equal(AND(Sum((op_to_expr false o1),
            (op_to_expr false o2)),Const(0xff)),Const(0)));
        (op_to_expr false Carry, RShift(Sum((op_to_expr false o1),
            (op_to_expr false o2)),8))]
    | OP_DEC (o1) -> [(op_to_expr true o1, Diff(op_to_expr true o1,Const(1)));
        (op_to_expr false Zero, Equal(op_to_expr true o1, Const(1)))]
    | OP_DECB (o1) -> [(op_to_expr false o1,Diff(op_to_expr false o1,Const(1)));
        (op_to_expr false Zero, Equal(op_to_expr false o1, Const(1)))]
    | OP_MUL -> [
        (op_to_expr true (ERn(1)),RShift(Prod(op_to_expr true Acc, 
                                  op_to_expr true (ERn(0))),16));
        (op_to_expr true Acc,AND(Prod(op_to_expr true Acc, 
                                  op_to_expr true (ERn(0))),Const(0xffff)));
        (op_to_expr false Zero,Equal(Prod(op_to_expr true Acc,
                                     op_to_expr true (ERn(0))),Const(0)))]
    | OP_MULB -> [
        (op_to_expr true Acc,Prod(op_to_expr false Acc, 
                                  op_to_expr false (Rn(0))));
        (op_to_expr false Zero,Equal(Prod(op_to_expr false Acc,
                                     op_to_expr false (Rn(0))),Const(0)))]
    | OP_SWAP -> [(RAMByte(Const(6)),RAMByte(Const(7)));
        (RAMByte(Const(7)),RAMByte(Const(6)))]
    | OP_XCHG (o1, o2) -> [(op_to_expr true o1, op_to_expr true o2);
        (op_to_expr true o2, op_to_expr true o1)]
    | OP_XCHGB (o1, o2) -> [(op_to_expr false o1, op_to_expr false o2);
        (op_to_expr false o2, op_to_expr false o1)]
    | OP_JBR (b, loc) -> [(Const(0), Equal(op_to_expr false b, Const(0)))]
    | OP_JBS (b, loc) -> [(Const(0), Equal(op_to_expr false b, Const(1)))]
    | OP_JEQ (loc) -> [(Const(0), Equal(op_to_expr false Zero, Const(1)))]
    | OP_JNE (loc) -> [(Const(0), Equal(op_to_expr false Zero, Const(0)))]
    | OP_JLT (loc) -> [(Const(0), Equal(op_to_expr false Carry, Const(1)))]
    | OP_JLE (loc) -> [(Const(0), OR(Equal(op_to_expr false Zero,
            Const(1)),Equal(op_to_expr false Carry, Const(1))))]
    | OP_JGT (loc) -> [(Const(0), OR(Equal(op_to_expr false Zero,
            Const(0)),Equal(op_to_expr false Carry, Const(0))))]
    | OP_JGE (loc) -> [(Const(0), Equal(op_to_expr false Carry, Const(0)))]
    | OP_SJ (loc) -> [(Const(0), Const(1))]
    | OP_J (loc) -> [(Const(0), Const(1))]
(*    | _ -> raise Not_found *)
    | _ -> [(Const(0), Const(0))]
;;

