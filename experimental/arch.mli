open Ssa;;

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

type nextaddr = Halt | Return | Simple of int | Jump of int * operand | 
    Call of int * operand | Conditional of int * operand
;;

val oprname : operand -> string;;

val get_op_ssa : int -> opcode -> ssa_expression list;;

