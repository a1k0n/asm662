#include "dasm.h"
int dasmfunc_00(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "NOP");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_01(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "RT");
		return 1;
	}
	return -1;
}

int dasmfunc_02(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "RTI");
		return 1;
	}
	return -1;
}

int dasmfunc_03(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "J       %s", get_rom_label((op[2]<<8)|op[1]));
		return 3;
	}
	return -1;
}

int dasmfunc_08(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADD     A, er0");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_09(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADD     A, er1");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_0a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADD     A, er2");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_0b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADD     A, er3");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_0c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_0d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_0e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_0f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_10(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "VCAL    0");
		do_vcal(0);

		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_11(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "VCAL    1");
		do_vcal(1);

		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_12(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "VCAL    2");
		do_vcal(2);

		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_13(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "VCAL    3");
		do_vcal(3);

		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_14(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "VCAL    4");
		do_vcal(4);

		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_15(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "VCAL    5");
		do_vcal(5);

		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_16(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "VCAL    6");
		do_vcal(6);

		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_17(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "VCAL    7");
		do_vcal(7);

		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_18(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADC     A, er0");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_19(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADC     A, er1");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_1a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADC     A, er2");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_1b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADC     A, er3");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_1c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_1d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_1e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_1f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_20(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    r0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    r0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    r0, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    r0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    r0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    r0, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    r0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    r0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    r0, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    r0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    r0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    r0, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, r0.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, r0.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, r0.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, r0.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, r0.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, r0.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, r0.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, r0.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      r0.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      r0.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      r0.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      r0.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      r0.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      r0.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      r0.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      r0.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     r0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, r0");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    r0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), r0", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     r0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     r0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     r0, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      r0.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      r0.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      r0.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      r0.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      r0.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      r0.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      r0.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      r0.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      r0.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      r0.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      r0.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      r0.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      r0.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      r0.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      r0.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      r0.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    r0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    r0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    r0, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    r0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    r0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    r0, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     r0");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, r0");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, r0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    r0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    r0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    r0, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_21(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    r1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    r1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    r1, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    r1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    r1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    r1, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    r1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    r1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    r1, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    r1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    r1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    r1, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, r1.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, r1.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, r1.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, r1.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, r1.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, r1.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, r1.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, r1.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      r1.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      r1.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      r1.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      r1.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      r1.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      r1.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      r1.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      r1.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     r1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, r1");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    r1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), r1", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     r1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     r1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     r1, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      r1.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      r1.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      r1.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      r1.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      r1.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      r1.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      r1.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      r1.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      r1.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      r1.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      r1.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      r1.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      r1.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      r1.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      r1.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      r1.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    r1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    r1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    r1, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    r1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    r1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    r1, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     r1");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, r1");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, r1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    r1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    r1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    r1, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_22(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    r2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    r2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    r2, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    r2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    r2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    r2, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    r2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    r2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    r2, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    r2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    r2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    r2, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, r2.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, r2.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, r2.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, r2.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, r2.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, r2.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, r2.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, r2.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      r2.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      r2.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      r2.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      r2.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      r2.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      r2.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      r2.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      r2.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     r2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, r2");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    r2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), r2", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     r2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     r2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     r2, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      r2.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      r2.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      r2.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      r2.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      r2.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      r2.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      r2.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      r2.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      r2.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      r2.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      r2.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      r2.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      r2.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      r2.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      r2.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      r2.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    r2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    r2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    r2, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    r2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    r2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    r2, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     r2");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, r2");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, r2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    r2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    r2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    r2, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_23(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    r3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    r3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    r3, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    r3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    r3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    r3, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    r3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    r3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    r3, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    r3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    r3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    r3, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, r3.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, r3.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, r3.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, r3.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, r3.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, r3.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, r3.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, r3.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      r3.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      r3.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      r3.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      r3.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      r3.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      r3.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      r3.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      r3.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     r3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, r3");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    r3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), r3", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     r3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     r3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     r3, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      r3.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      r3.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      r3.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      r3.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      r3.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      r3.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      r3.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      r3.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      r3.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      r3.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      r3.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      r3.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      r3.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      r3.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      r3.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      r3.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    r3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    r3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    r3, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    r3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    r3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    r3, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     r3");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, r3");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, r3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    r3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    r3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    r3, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_24(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    r4, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    r4, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    r4, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    r4, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    r4, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    r4, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    r4, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    r4, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    r4, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    r4, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    r4, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    r4, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, r4.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, r4.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, r4.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, r4.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, r4.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, r4.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, r4.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, r4.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      r4.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      r4.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      r4.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      r4.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      r4.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      r4.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      r4.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      r4.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     r4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, r4");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    r4, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), r4", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     r4, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     r4, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     r4, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      r4.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      r4.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      r4.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      r4.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      r4.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      r4.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      r4.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      r4.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      r4.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      r4.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      r4.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      r4.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      r4.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      r4.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      r4.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      r4.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    r4, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    r4, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    r4, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    r4, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    r4, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    r4, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     r4");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, r4");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, r4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    r4, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    r4, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    r4, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_25(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    r5, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    r5, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    r5, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    r5, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    r5, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    r5, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    r5, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    r5, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    r5, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    r5, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    r5, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    r5, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, r5.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, r5.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, r5.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, r5.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, r5.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, r5.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, r5.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, r5.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      r5.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      r5.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      r5.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      r5.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      r5.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      r5.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      r5.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      r5.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     r5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, r5");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    r5, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), r5", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     r5, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     r5, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     r5, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      r5.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      r5.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      r5.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      r5.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      r5.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      r5.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      r5.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      r5.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      r5.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      r5.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      r5.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      r5.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      r5.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      r5.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      r5.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      r5.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    r5, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    r5, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    r5, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    r5, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    r5, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    r5, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     r5");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, r5");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, r5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    r5, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    r5, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    r5, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_26(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    r6, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    r6, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    r6, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    r6, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    r6, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    r6, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    r6, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    r6, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    r6, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    r6, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    r6, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    r6, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, r6.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, r6.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, r6.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, r6.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, r6.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, r6.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, r6.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, r6.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      r6.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      r6.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      r6.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      r6.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      r6.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      r6.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      r6.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      r6.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     r6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, r6");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    r6, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), r6", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     r6, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     r6, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     r6, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      r6.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      r6.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      r6.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      r6.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      r6.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      r6.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      r6.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      r6.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      r6.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      r6.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      r6.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      r6.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      r6.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      r6.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      r6.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      r6.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    r6, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    r6, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    r6, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    r6, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    r6, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    r6, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     r6");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, r6");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, r6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    r6, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    r6, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    r6, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_27(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    r7, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    r7, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    r7, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    r7, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    r7, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    r7, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    r7, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    r7, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    r7, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    r7, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    r7, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    r7, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, r7.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, r7.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, r7.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, r7.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, r7.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, r7.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, r7.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, r7.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      r7.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      r7.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      r7.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      r7.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      r7.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      r7.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      r7.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      r7.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     r7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, r7");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    r7, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), r7", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     r7, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     r7, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     r7, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      r7.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      r7.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      r7.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      r7.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      r7.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      r7.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      r7.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      r7.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      r7.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      r7.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      r7.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      r7.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      r7.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      r7.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      r7.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      r7.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    r7, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    r7, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    r7, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    r7, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    r7, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    r7, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     r7");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, r7");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, r7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    r7, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    r7, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    r7, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_28(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SUB     A, er0");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_29(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SUB     A, er1");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_2a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SUB     A, er2");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_2b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SUB     A, er3");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_2c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_2d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_2e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_2f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_30(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JRNZ    DP, %s", get_rom_label(D->pc+((signed char)op[1])+2));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_31(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "SCAL    %s", get_rom_label(D->pc+((signed char)op[1])+2));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_32(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "CAL     %s", get_rom_label((op[2]<<8)|op[1]));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_33(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ROL     A");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ROLB    A");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_34(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, er0");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_35(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, er1");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_36(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, er2");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_37(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, er3");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_38(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SBC     A, er0");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_39(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SBC     A, er1");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_3a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SBC     A, er2");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_3b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SBC     A, er3");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_3c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_3d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_3e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_3f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_40(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, X1");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_41(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, X2");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_42(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, DP");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_43(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ROR     A");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "RORB    A");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_44(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     er0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     er0, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     er0, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     er0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     er0, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     er0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     er0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     er0, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [er0]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     er0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     er0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     er0, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [er0]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [er0]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DEC     er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INC     er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [er0]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [er0]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [er0]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, er0");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOV     er0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOV     er0, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), er0", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      er0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      er0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      er0, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     er0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     er0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     er0, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     er0, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     er0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     er0, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, er0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     er0, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     er0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     er0, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_45(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     er1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     er1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     er1, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     er1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     er1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     er1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     er1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     er1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [er1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     er1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     er1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     er1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [er1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [er1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DEC     er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INC     er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [er1]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [er1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [er1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, er1");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOV     er1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOV     er1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), er1", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      er1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      er1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      er1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     er1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     er1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     er1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     er1, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     er1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     er1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, er1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     er1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     er1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     er1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_46(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     er2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     er2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     er2, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     er2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     er2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     er2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     er2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     er2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [er2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     er2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     er2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     er2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [er2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [er2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DEC     er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INC     er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [er2]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [er2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [er2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, er2");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOV     er2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOV     er2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), er2", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      er2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      er2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      er2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     er2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     er2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     er2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     er2, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     er2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     er2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, er2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     er2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     er2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     er2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_47(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     er3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     er3, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     er3, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     er3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     er3, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     er3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     er3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     er3, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [er3]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     er3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     er3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     er3, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [er3]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [er3]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DEC     er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INC     er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [er3]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [er3]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [er3]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, er3");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOV     er3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOV     er3, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), er3", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      er3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      er3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      er3, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     er3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     er3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     er3, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     er3, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     er3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     er3, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, er3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     er3, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     er3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     er3, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_48(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "CMP     A, er0");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_49(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "CMP     A, er1");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_4a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "CMP     A, er2");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_4b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "CMP     A, er3");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_4c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_4d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_4e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_4f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_50(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOV     X1, A");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_51(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOV     X2, A");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_52(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOV     DP, A");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_53(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SLL     A");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SLLB    A");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_54(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "PUSHS   LRB");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_55(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "PUSHS   A");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_57(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOV     LRB, #0%04xh", (op[2]<<8)|op[1]);
		D->lrb = (op[2]<<8)|op[1];
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_58(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "AND     A, er0");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_59(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "AND     A, er1");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_5a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "AND     A, er2");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_5b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "AND     A, er3");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_5c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_5d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_5e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_5f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_60(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOV     X1, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_61(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOV     X2, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_62(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOV     DP, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_63(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SRL     A");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SRLB    A");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_64(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "POPS    LRB");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_65(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "POPS    A");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_67(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, #0%04xh", (op[2]<<8)|op[1]);
		D->dd = 1;
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_68(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "OR      A, er0");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_69(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "OR      A, er1");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_6a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "OR      A, er2");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_6b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "OR      A, er3");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_6c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_6d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_6e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_6f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_70(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INC     X1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_71(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INC     X2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_72(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INC     DP");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_73(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SRA     A");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SRAB    A");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_77(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, #0%02xh", op[1]);
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_78(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, r0");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_79(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, r1");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_7a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, r2");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_7b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, r3");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_7c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, r4");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_7d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, r5");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_7e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, r6");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_7f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, r7");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_80(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DEC     X1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_81(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DEC     X2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_82(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DEC     DP");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_83(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SWAP");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "SWAPB");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_84(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "XNBL    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_85(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "SC");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_86(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADD     A, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_87(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADD     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADDB    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_88(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, er0");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_89(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, er1");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_8a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, er2");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_8b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, er3");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_8c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "STB     A, r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_8d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "STB     A, r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_8e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "STB     A, r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_8f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "STB     A, r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_90(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[1]==0x92) {
		sprintf(buf, "ADC     A, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     X1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     X1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x82) {
		sprintf(buf, "ADD     A, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     X1, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     X1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     X1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     X1, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xD2) {
		sprintf(buf, "AND     A, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     X1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     X1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [X1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     X1");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xC2) {
		sprintf(buf, "CMP     A, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     X1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     X1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     X1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x9E) {
		sprintf(buf, "CMPC    A, 0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [X1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAD) {
		sprintf(buf, "CMPC    A, 0%04xh[X1]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x9F) {
		sprintf(buf, "CMPCB   A, 0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [X1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAF) {
		sprintf(buf, "CMPCB   A, 0%04xh[X1]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x37) {
		sprintf(buf, "DIV");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [X1]");
		return 2;
	}
	if(1 && op[1]==0x9C) {
		sprintf(buf, "LC      A, 0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [X1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA9) {
		sprintf(buf, "LC      A, 0%04xh[X1]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x9D) {
		sprintf(buf, "LCB     A, 0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [X1]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAB) {
		sprintf(buf, "LCB     A, 0%04xh[X1]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, X1");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), X1", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x35) {
		sprintf(buf, "MUL");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xE2) {
		sprintf(buf, "OR      A, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      X1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      X1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      X1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     X1");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xB2) {
		sprintf(buf, "SBC     A, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     X1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     X1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     X1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     X1");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA2) {
		sprintf(buf, "SUB     A, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     X1, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     X1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     X1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, X1");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xF2) {
		sprintf(buf, "XOR     A, X1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     X1, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     X1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     X1, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_91(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[1]==0x92) {
		sprintf(buf, "ADC     A, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     X2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     X2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x82) {
		sprintf(buf, "ADD     A, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     X2, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     X2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     X2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     X2, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xD2) {
		sprintf(buf, "AND     A, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     X2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     X2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [X2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     X2");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xC2) {
		sprintf(buf, "CMP     A, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     X2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     X2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     X2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [X2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAD) {
		sprintf(buf, "CMPC    A, 0%04xh[X2]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [X2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAF) {
		sprintf(buf, "CMPCB   A, 0%04xh[X2]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [X2]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [X2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA9) {
		sprintf(buf, "LC      A, 0%04xh[X2]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [X2]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAB) {
		sprintf(buf, "LCB     A, 0%04xh[X2]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, X2");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), X2", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, X2");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xE2) {
		sprintf(buf, "OR      A, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      X2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      X2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      X2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     X2");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xB2) {
		sprintf(buf, "SBC     A, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     X2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     X2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     X2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     X2");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA2) {
		sprintf(buf, "SUB     A, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     X2, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     X2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     X2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, X2");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xF2) {
		sprintf(buf, "XOR     A, X2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     X2, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     X2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     X2, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_92(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[1]==0x92) {
		sprintf(buf, "ADC     A, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     DP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     DP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x82) {
		sprintf(buf, "ADD     A, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     DP, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     DP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     DP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     DP, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xD2) {
		sprintf(buf, "AND     A, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     DP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     DP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     DP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xC2) {
		sprintf(buf, "CMP     A, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     DP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     DP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     DP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAD) {
		sprintf(buf, "CMPC    A, 0%04xh[DP]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAF) {
		sprintf(buf, "CMPCB   A, 0%04xh[DP]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [DP]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA9) {
		sprintf(buf, "LC      A, 0%04xh[DP]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAB) {
		sprintf(buf, "LCB     A, 0%04xh[DP]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, DP");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), DP", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, DP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xE2) {
		sprintf(buf, "OR      A, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      DP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      DP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      DP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     DP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xB2) {
		sprintf(buf, "SBC     A, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     DP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     DP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     DP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     DP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA2) {
		sprintf(buf, "SUB     A, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     DP, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     DP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     DP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, DP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xF2) {
		sprintf(buf, "XOR     A, DP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     DP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     DP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     DP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_93(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DAA");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_94(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DAS");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_95(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "RC");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_96(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADC     A, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_97(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ADC     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "ADCB    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_98(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOVB    r0, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_99(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOVB    r1, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_9a(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOVB    r2, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_9b(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOVB    r3, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_9c(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOVB    r4, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_9d(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOVB    r5, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_9e(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOVB    r6, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_9f(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "MOVB    r7, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_a0(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[1]==0x92) {
		sprintf(buf, "ADC     A, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     SSP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     SSP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x82) {
		sprintf(buf, "ADD     A, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     SSP, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     SSP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     SSP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     SSP, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xD2) {
		sprintf(buf, "AND     A, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     SSP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     SSP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [SSP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     SSP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xC2) {
		sprintf(buf, "CMP     A, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     SSP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     SSP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     SSP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [SSP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [SSP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DEC     SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INC     SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [SSP]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [SSP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [SSP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, SSP");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOV     SSP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOV     SSP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), SSP", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, SSP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xE2) {
		sprintf(buf, "OR      A, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      SSP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      SSP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      SSP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     SSP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xB2) {
		sprintf(buf, "SBC     A, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     SSP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     SSP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     SSP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     SSP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA2) {
		sprintf(buf, "SUB     A, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     SSP, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     SSP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     SSP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, SSP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xF2) {
		sprintf(buf, "XOR     A, SSP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     SSP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     SSP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     SSP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_a1(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[1]==0x92) {
		sprintf(buf, "ADC     A, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     USP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     USP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x82) {
		sprintf(buf, "ADD     A, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     USP, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     USP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     USP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     USP, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xD2) {
		sprintf(buf, "AND     A, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     USP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     USP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [USP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     USP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xC2) {
		sprintf(buf, "CMP     A, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     USP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     USP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     USP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [USP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAD) {
		sprintf(buf, "CMPC    A, 0%04xh[USP]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [USP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DEC     USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INC     USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [USP]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [USP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA9) {
		sprintf(buf, "LC      A, 0%04xh[USP]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [USP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAB) {
		sprintf(buf, "LCB     A, 0%04xh[USP]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, USP");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOV     USP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOV     USP, #0%04xh", (op[3]<<8)|op[2]);
		D->usp = (op[3]<<8)|op[2];
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), USP", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, USP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xE2) {
		sprintf(buf, "OR      A, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      USP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      USP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      USP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     USP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xB2) {
		sprintf(buf, "SBC     A, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     USP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     USP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     USP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     USP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA2) {
		sprintf(buf, "SUB     A, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     USP, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     USP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     USP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, USP");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xF2) {
		sprintf(buf, "XOR     A, USP");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     USP, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     USP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     USP, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_a2(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0 && op[1]==0x92) {
		sprintf(buf, "ADCB    A, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    PSWH, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    PSWH, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    PSWH, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[1]==0x82) {
		sprintf(buf, "ADDB    A, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    PSWH, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    PSWH, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    PSWH, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[1]==0xD2) {
		sprintf(buf, "ANDB    A, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    PSWH, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    PSWH, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    PSWH, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    PSWH");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xC2) {
		sprintf(buf, "CMPB    A, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    PSWH, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    PSWH, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    PSWH, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xAF) {
		sprintf(buf, "CMPCB   A, 0%04xh[USP]", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DECB    PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x36) {
		sprintf(buf, "DIVB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INCB    PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, PSWH.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, PSWH.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, PSWH.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, PSWH.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, PSWH.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, PSWH.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, PSWH.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, PSWH.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      PSWH.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      PSWH.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      PSWH.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      PSWH.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      PSWH.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      PSWH.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      PSWH.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      PSWH.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     PSWH, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, PSWH");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    PSWH, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), PSWH", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOVB    PSWH, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x34) {
		sprintf(buf, "MULB");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xE2) {
		sprintf(buf, "ORB     A, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     PSWH, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     PSWH, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     PSWH, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      PSWH.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      PSWH.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      PSWH.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      PSWH.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      PSWH.4");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      PSWH.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      PSWH.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      PSWH.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      PSWH.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      PSWH.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      PSWH.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      PSWH.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      PSWH.4");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      PSWH.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      PSWH.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      PSWH.7");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xB2) {
		sprintf(buf, "SBCB    A, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    PSWH, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    PSWH, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    PSWH, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    PSWH");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xA2) {
		sprintf(buf, "SUBB    A, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    PSWH, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    PSWH, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    PSWH, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     PSWH");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, PSWH");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, PSWH");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    PSWH, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    PSWH, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    PSWH, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_a3(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0 && op[1]==0x92) {
		sprintf(buf, "ADCB    A, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    PSWL, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    PSWL, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    PSWL, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[1]==0x82) {
		sprintf(buf, "ADDB    A, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    PSWL, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    PSWL, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    PSWL, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[1]==0xD2) {
		sprintf(buf, "ANDB    A, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    PSWL, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    PSWL, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    PSWL, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    PSWL");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xC2) {
		sprintf(buf, "CMPB    A, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    PSWL, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    PSWL, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    PSWL, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DECB    PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INCB    PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, PSWL.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, PSWL.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, PSWL.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, PSWL.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, PSWL.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, PSWL.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, PSWL.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, PSWL.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      PSWL.0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      PSWL.1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      PSWL.2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      PSWL.3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      PSWL.4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      PSWL.5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      PSWL.6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      PSWL.7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     PSWL, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, PSWL");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    PSWL, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), PSWL", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOVB    PSWL, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, PSWL");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xE2) {
		sprintf(buf, "ORB     A, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     PSWL, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     PSWL, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     PSWL, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      PSWL.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      PSWL.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      PSWL.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      PSWL.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      PSWL.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      PSWL.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      PSWL.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      PSWL.7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      PSWL.0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      PSWL.1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      PSWL.2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      PSWL.3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      PSWL.4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      PSWL.5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      PSWL.6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      PSWL.7");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xB2) {
		sprintf(buf, "SBCB    A, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    PSWL, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    PSWL, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    PSWL, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    PSWL");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xA2) {
		sprintf(buf, "SUBB    A, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    PSWL, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    PSWL, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    PSWL, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     PSWL");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, PSWL");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, PSWL");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    PSWL, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    PSWL, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    PSWL, #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_a4(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[1]==0x92) {
		sprintf(buf, "ADC     A, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     LRB, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x82) {
		sprintf(buf, "ADD     A, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     LRB, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     LRB, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     LRB, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xD2) {
		sprintf(buf, "AND     A, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     LRB, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [LRB]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     LRB");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xC2) {
		sprintf(buf, "CMP     A, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     LRB, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     LRB, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     LRB, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [LRB]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [LRB]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [LRB]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [LRB]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [LRB]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, LRB");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOV     LRB, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), LRB", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, LRB");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xE2) {
		sprintf(buf, "OR      A, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      LRB, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      LRB, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      LRB, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     LRB");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xB2) {
		sprintf(buf, "SBC     A, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     LRB, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     LRB, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     LRB, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     LRB");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA2) {
		sprintf(buf, "SUB     A, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     LRB, A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     LRB, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     LRB, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, LRB");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xF2) {
		sprintf(buf, "XOR     A, LRB");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     LRB, A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     LRB, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     LRB, #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_a6(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SUB     A, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_a7(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SUB     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "SUBB    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_a8(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INCB    r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_a9(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INCB    r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_aa(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INCB    r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_ab(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INCB    r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_ac(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INCB    r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_ad(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INCB    r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_ae(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INCB    r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_af(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INCB    r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_b0(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[3]==0x92) {
		sprintf(buf, "ADC     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x93) {
		sprintf(buf, "ADC     0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x90) {
		sprintf(buf, "ADC     0%04xh[X1], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(D->dd == 1 && op[3]==0x82) {
		sprintf(buf, "ADD     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x81) {
		sprintf(buf, "ADD     0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0x83) {
		sprintf(buf, "ADD     0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x80) {
		sprintf(buf, "ADD     0%04xh[X1], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0xD1) {
		sprintf(buf, "AND     0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xD2) {
		sprintf(buf, "AND     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xD3) {
		sprintf(buf, "AND     0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xD0) {
		sprintf(buf, "AND     0%04xh[X1], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0x23) {
		sprintf(buf, "CAL     [0%04xh[X1]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x15) {
		sprintf(buf, "CLR     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xC2) {
		sprintf(buf, "CMP     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC1) {
		sprintf(buf, "CMP     0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC3) {
		sprintf(buf, "CMP     0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xC0) {
		sprintf(buf, "CMP     0%04xh[X1], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0xAC) {
		sprintf(buf, "CMPC    A, [0%04xh[X1]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xAE) {
		sprintf(buf, "CMPCB   A, [0%04xh[X1]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x17) {
		sprintf(buf, "DEC     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x16) {
		sprintf(buf, "INC     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x22) {
		sprintf(buf, "J       [0%04xh[X1]]", (op[2]<<8)|op[1]);
		return 4;
	}
	if(1 && op[3]==0xA8) {
		sprintf(buf, "LC      A, [0%04xh[X1]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xAA) {
		sprintf(buf, "LCB     A, [0%04xh[X1]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x99) {
		sprintf(buf, "MOV     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->dd = 1;
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7A) {
		sprintf(buf, "MOV     DP, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x48) {
		sprintf(buf, "MOV     er0, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x49) {
		sprintf(buf, "MOV     er1, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4A) {
		sprintf(buf, "MOV     er2, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4B) {
		sprintf(buf, "MOV     er3, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7F) {
		sprintf(buf, "MOV     LRB, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x8A) {
		sprintf(buf, "MOV     0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x98) {
		sprintf(buf, "MOV     0%04xh[X1], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0x7C) {
		sprintf(buf, "MOV     off(%s), 0%04xh[X1]", get_ram_label(((D->lrb>>5)<<8)|op[4], 4), (op[2]<<8)|op[1]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x7D) {
		sprintf(buf, "MOV     PSW, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7E) {
		sprintf(buf, "MOV     SSP, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7B) {
		sprintf(buf, "MOV     USP, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x78) {
		sprintf(buf, "MOV     X1, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x79) {
		sprintf(buf, "MOV     X2, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xE2) {
		sprintf(buf, "OR      A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE1) {
		sprintf(buf, "OR      0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE3) {
		sprintf(buf, "OR      0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xD0) {
		sprintf(buf, "OR      0%04xh[X1], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0xB7) {
		sprintf(buf, "ROL     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC7) {
		sprintf(buf, "ROR     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xB2) {
		sprintf(buf, "SBC     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB1) {
		sprintf(buf, "SBC     0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB3) {
		sprintf(buf, "SBC     0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xB0) {
		sprintf(buf, "SBC     0%04xh[X1], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0xD7) {
		sprintf(buf, "SLL     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF7) {
		sprintf(buf, "SRA     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE7) {
		sprintf(buf, "SRL     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xA2) {
		sprintf(buf, "SUB     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xA1) {
		sprintf(buf, "SUB     0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xA3) {
		sprintf(buf, "SUB     0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xA0) {
		sprintf(buf, "SUB     0%04xh[X1], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(D->dd == 1 && op[3]==0x10) {
		sprintf(buf, "XCHG    A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xF2) {
		sprintf(buf, "XOR     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF1) {
		sprintf(buf, "XOR     0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF3) {
		sprintf(buf, "XOR     0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xF0) {
		sprintf(buf, "XOR     0%04xh[X1], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	return -1;
}

int dasmfunc_b1(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[3]==0x92) {
		sprintf(buf, "ADC     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x93) {
		sprintf(buf, "ADC     0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x90) {
		sprintf(buf, "ADC     0%04xh[X2], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(D->dd == 1 && op[3]==0x82) {
		sprintf(buf, "ADD     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x81) {
		sprintf(buf, "ADD     0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0x83) {
		sprintf(buf, "ADD     0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x80) {
		sprintf(buf, "ADD     0%04xh[X2], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0xD1) {
		sprintf(buf, "AND     0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xD2) {
		sprintf(buf, "AND     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xD3) {
		sprintf(buf, "AND     0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xD0) {
		sprintf(buf, "AND     0%04xh[X2], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0x23) {
		sprintf(buf, "CAL     [0%04xh[X2]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x15) {
		sprintf(buf, "CLR     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xC2) {
		sprintf(buf, "CMP     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC1) {
		sprintf(buf, "CMP     0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC3) {
		sprintf(buf, "CMP     0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xC0) {
		sprintf(buf, "CMP     0%04xh[X2], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0xAC) {
		sprintf(buf, "CMPC    A, [0%04xh[X2]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xAE) {
		sprintf(buf, "CMPCB   A, [0%04xh[X2]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x17) {
		sprintf(buf, "DEC     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x16) {
		sprintf(buf, "INC     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x22) {
		sprintf(buf, "J       [0%04xh[X2]]", (op[2]<<8)|op[1]);
		return 4;
	}
	if(1 && op[3]==0xA8) {
		sprintf(buf, "LC      A, [0%04xh[X2]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xAA) {
		sprintf(buf, "LCB     A, [0%04xh[X2]]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x99) {
		sprintf(buf, "MOV     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->dd = 1;
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7A) {
		sprintf(buf, "MOV     DP, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x48) {
		sprintf(buf, "MOV     er0, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x49) {
		sprintf(buf, "MOV     er1, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4A) {
		sprintf(buf, "MOV     er2, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4B) {
		sprintf(buf, "MOV     er3, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7F) {
		sprintf(buf, "MOV     LRB, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x8A) {
		sprintf(buf, "MOV     0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x98) {
		sprintf(buf, "MOV     0%04xh[X2], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0x7C) {
		sprintf(buf, "MOV     off(%s), 0%04xh[X2]", get_ram_label(((D->lrb>>5)<<8)|op[4], 4), (op[2]<<8)|op[1]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x7D) {
		sprintf(buf, "MOV     PSW, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7E) {
		sprintf(buf, "MOV     SSP, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7B) {
		sprintf(buf, "MOV     USP, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x78) {
		sprintf(buf, "MOV     X1, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x79) {
		sprintf(buf, "MOV     X2, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xE2) {
		sprintf(buf, "OR      A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE1) {
		sprintf(buf, "OR      0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE3) {
		sprintf(buf, "OR      0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xD0) {
		sprintf(buf, "OR      0%04xh[X2], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0xB7) {
		sprintf(buf, "ROL     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC7) {
		sprintf(buf, "ROR     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xB2) {
		sprintf(buf, "SBC     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB1) {
		sprintf(buf, "SBC     0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB3) {
		sprintf(buf, "SBC     0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xB0) {
		sprintf(buf, "SBC     0%04xh[X2], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(1 && op[3]==0xD7) {
		sprintf(buf, "SLL     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF7) {
		sprintf(buf, "SRA     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE7) {
		sprintf(buf, "SRL     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xA2) {
		sprintf(buf, "SUB     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xA1) {
		sprintf(buf, "SUB     0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xA3) {
		sprintf(buf, "SUB     0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xA0) {
		sprintf(buf, "SUB     0%04xh[X2], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	if(D->dd == 1 && op[3]==0x10) {
		sprintf(buf, "XCHG    A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[3]==0xF2) {
		sprintf(buf, "XOR     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF1) {
		sprintf(buf, "XOR     0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF3) {
		sprintf(buf, "XOR     0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xF0) {
		sprintf(buf, "XOR     0%04xh[X2], #0%04xh", (op[2]<<8)|op[1], (op[5]<<8)|op[4]);
		D->pc += 6;
		return 6;
	}
	return -1;
}

int dasmfunc_b2(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[1]==0x92) {
		sprintf(buf, "ADC     A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADC     [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADC     [DP], #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x82) {
		sprintf(buf, "ADD     A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADD     [DP], A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0x83) {
		sprintf(buf, "ADD     [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADD     [DP], #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "AND     [DP], A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xD2) {
		sprintf(buf, "AND     A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "AND     [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "AND     [DP], #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x23) {
		sprintf(buf, "CAL     [[DP]]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLR     [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xC2) {
		sprintf(buf, "CMP     A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMP     [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMP     [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMP     [DP], #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xAC) {
		sprintf(buf, "CMPC    A, [[DP]]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAE) {
		sprintf(buf, "CMPCB   A, [[DP]]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DEC     [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INC     [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x22) {
		sprintf(buf, "J       [[DP]]");
		return 2;
	}
	if(1 && op[1]==0xA8) {
		sprintf(buf, "LC      A, [[DP]]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xAA) {
		sprintf(buf, "LCB     A, [[DP]]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOV     A, [DP]");
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7A) {
		sprintf(buf, "MOV     DP, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOV     er0, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOV     er1, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOV     er2, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOV     er3, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7F) {
		sprintf(buf, "MOV     LRB, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOV     [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOV     [DP], #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOV     off(%s), [DP]", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x7D) {
		sprintf(buf, "MOV     PSW, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7E) {
		sprintf(buf, "MOV     SSP, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7B) {
		sprintf(buf, "MOV     USP, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x78) {
		sprintf(buf, "MOV     X1, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x79) {
		sprintf(buf, "MOV     X2, [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xE2) {
		sprintf(buf, "OR      A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "OR      [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "OR      [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "OR      [DP], #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROL     [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "ROR     [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xB2) {
		sprintf(buf, "SBC     A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBC     [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBC     [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBC     [DP], #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLL     [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRA     [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRL     [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA2) {
		sprintf(buf, "SUB     A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUB     [DP], A");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xA3) {
		sprintf(buf, "SUB     [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUB     [DP], #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 1 && op[1]==0x10) {
		sprintf(buf, "XCHG    A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 1 && op[1]==0xF2) {
		sprintf(buf, "XOR     A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XOR     [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XOR     [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XOR     [DP], #0%04xh", (op[3]<<8)|op[2]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_b3(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[2]==0x92) {
		sprintf(buf, "ADC     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x93) {
		sprintf(buf, "ADC     (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x90) {
		sprintf(buf, "ADC     (%s-0%04xh)[USP], #0%04xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(D->dd == 1 && op[2]==0x82) {
		sprintf(buf, "ADD     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x81) {
		sprintf(buf, "ADD     (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0x83) {
		sprintf(buf, "ADD     (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x80) {
		sprintf(buf, "ADD     (%s-0%04xh)[USP], #0%04xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xD1) {
		sprintf(buf, "AND     (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xD2) {
		sprintf(buf, "AND     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD3) {
		sprintf(buf, "AND     (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD0) {
		sprintf(buf, "AND     (%s-0%04xh)[USP], #0%04xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x23) {
		sprintf(buf, "CAL     [(%s-0%04xh)[USP]]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x15) {
		sprintf(buf, "CLR     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xC2) {
		sprintf(buf, "CMP     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC1) {
		sprintf(buf, "CMP     (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC3) {
		sprintf(buf, "CMP     (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xC0) {
		sprintf(buf, "CMP     (%s-0%04xh)[USP], #0%04xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xAC) {
		sprintf(buf, "CMPC    A, [(%s-0%04xh)[USP]]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xAE) {
		sprintf(buf, "CMPCB   A, [(%s-0%04xh)[USP]]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x17) {
		sprintf(buf, "DEC     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x16) {
		sprintf(buf, "INC     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x22) {
		sprintf(buf, "J       [(%s-0%04xh)[USP]]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		return 3;
	}
	if(1 && op[2]==0xA8) {
		sprintf(buf, "LC      A, [(%s-0%04xh)[USP]]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xAA) {
		sprintf(buf, "LCB     A, [(%s-0%04xh)[USP]]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x99) {
		sprintf(buf, "MOV     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->dd = 1;
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7A) {
		sprintf(buf, "MOV     DP, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x48) {
		sprintf(buf, "MOV     er0, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x49) {
		sprintf(buf, "MOV     er1, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4A) {
		sprintf(buf, "MOV     er2, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4B) {
		sprintf(buf, "MOV     er3, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7F) {
		sprintf(buf, "MOV     LRB, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x8A) {
		sprintf(buf, "MOV     (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x98) {
		sprintf(buf, "MOV     (%s-0%04xh)[USP], #0%04xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x7C) {
		sprintf(buf, "MOV     off(%s), (%s-0%04xh)[USP]", get_ram_label(((D->lrb>>5)<<8)|op[3], 4), get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x7D) {
		sprintf(buf, "MOV     PSW, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7E) {
		sprintf(buf, "MOV     SSP, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7B) {
		sprintf(buf, "MOV     USP, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x78) {
		sprintf(buf, "MOV     X1, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x79) {
		sprintf(buf, "MOV     X2, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xE2) {
		sprintf(buf, "OR      A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE1) {
		sprintf(buf, "OR      (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE3) {
		sprintf(buf, "OR      (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD0) {
		sprintf(buf, "OR      (%s-0%04xh)[USP], #0%04xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xB7) {
		sprintf(buf, "ROL     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC7) {
		sprintf(buf, "ROR     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xB2) {
		sprintf(buf, "SBC     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB1) {
		sprintf(buf, "SBC     (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB3) {
		sprintf(buf, "SBC     (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xB0) {
		sprintf(buf, "SBC     (%s-0%04xh)[USP], #0%04xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xD7) {
		sprintf(buf, "SLL     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF7) {
		sprintf(buf, "SRA     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE7) {
		sprintf(buf, "SRL     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xA2) {
		sprintf(buf, "SUB     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA1) {
		sprintf(buf, "SUB     (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xA3) {
		sprintf(buf, "SUB     (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xA0) {
		sprintf(buf, "SUB     (%s-0%04xh)[USP], #0%04xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(D->dd == 1 && op[2]==0x10) {
		sprintf(buf, "XCHG    A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xF2) {
		sprintf(buf, "XOR     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF1) {
		sprintf(buf, "XOR     (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF3) {
		sprintf(buf, "XOR     (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xF0) {
		sprintf(buf, "XOR     (%s-0%04xh)[USP], #0%04xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	return -1;
}

int dasmfunc_b4(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[2]==0x93) {
		sprintf(buf, "ADC     off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x90) {
		sprintf(buf, "ADC     off(%s), #0%04xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x81) {
		sprintf(buf, "ADD     off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0x83) {
		sprintf(buf, "ADD     off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x80) {
		sprintf(buf, "ADD     off(%s), #0%04xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xD1) {
		sprintf(buf, "AND     off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD3) {
		sprintf(buf, "AND     off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD0) {
		sprintf(buf, "AND     off(%s), #0%04xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x23) {
		sprintf(buf, "CAL     [off(%s)]", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x15) {
		sprintf(buf, "CLR     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC1) {
		sprintf(buf, "CMP     off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC3) {
		sprintf(buf, "CMP     off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xC0) {
		sprintf(buf, "CMP     off(%s), #0%04xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xAC) {
		sprintf(buf, "CMPC    A, [off(%s)]", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xAD) {
		sprintf(buf, "CMPC    A, 0%04xh[off(%s)]", (op[4]<<8)|op[3], get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xAE) {
		sprintf(buf, "CMPCB   A, [off(%s)]", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xAF) {
		sprintf(buf, "CMPCB   A, 0%04xh[off(%s)]", (op[4]<<8)|op[3], get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x17) {
		sprintf(buf, "DEC     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x16) {
		sprintf(buf, "INC     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x22) {
		sprintf(buf, "J       [off(%s)]", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		return 3;
	}
	if(1 && op[2]==0xA8) {
		sprintf(buf, "LC      A, [off(%s)]", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA9) {
		sprintf(buf, "LC      A, 0%04xh[off(%s)]", (op[4]<<8)|op[3], get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xAA) {
		sprintf(buf, "LCB     A, [off(%s)]", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xAB) {
		sprintf(buf, "LCB     A, 0%04xh[off(%s)]", (op[4]<<8)|op[3], get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x99) {
		sprintf(buf, "MOV     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->dd = 1;
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7A) {
		sprintf(buf, "MOV     DP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x48) {
		sprintf(buf, "MOV     er0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x49) {
		sprintf(buf, "MOV     er1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4A) {
		sprintf(buf, "MOV     er2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4B) {
		sprintf(buf, "MOV     er3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7F) {
		sprintf(buf, "MOV     LRB, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x8A) {
		sprintf(buf, "MOV     off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x98) {
		sprintf(buf, "MOV     off(%s), #0%04xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x7C) {
		sprintf(buf, "MOV     off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[3], 4), get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x7D) {
		sprintf(buf, "MOV     PSW, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7E) {
		sprintf(buf, "MOV     SSP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7B) {
		sprintf(buf, "MOV     USP, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x78) {
		sprintf(buf, "MOV     X1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x79) {
		sprintf(buf, "MOV     X2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xE2) {
		sprintf(buf, "OR      A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE1) {
		sprintf(buf, "OR      off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE3) {
		sprintf(buf, "OR      off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD0) {
		sprintf(buf, "OR      off(%s), #0%04xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xB7) {
		sprintf(buf, "ROL     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC7) {
		sprintf(buf, "ROR     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB1) {
		sprintf(buf, "SBC     off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB3) {
		sprintf(buf, "SBC     off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xB0) {
		sprintf(buf, "SBC     off(%s), #0%04xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xD7) {
		sprintf(buf, "SLL     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF7) {
		sprintf(buf, "SRA     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE7) {
		sprintf(buf, "SRL     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA1) {
		sprintf(buf, "SUB     off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xA3) {
		sprintf(buf, "SUB     off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xA0) {
		sprintf(buf, "SUB     off(%s), #0%04xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(D->dd == 1 && op[2]==0x10) {
		sprintf(buf, "XCHG    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF1) {
		sprintf(buf, "XOR     off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF3) {
		sprintf(buf, "XOR     off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xF0) {
		sprintf(buf, "XOR     off(%s), #0%04xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	return -1;
}

int dasmfunc_b5(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1 && op[2]==0x92) {
		sprintf(buf, "ADC     A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x93) {
		sprintf(buf, "ADC     %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x90) {
		sprintf(buf, "ADC     %s, #0%04xh", get_ram_label(op[1], 2), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(D->dd == 1 && op[2]==0x82) {
		sprintf(buf, "ADD     A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x81) {
		sprintf(buf, "ADD     %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0x83) {
		sprintf(buf, "ADD     %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x80) {
		sprintf(buf, "ADD     %s, #0%04xh", get_ram_label(op[1], 2), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xD1) {
		sprintf(buf, "AND     %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xD2) {
		sprintf(buf, "AND     A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD3) {
		sprintf(buf, "AND     %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD0) {
		sprintf(buf, "AND     %s, #0%04xh", get_ram_label(op[1], 2), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x23) {
		sprintf(buf, "CAL     [%s]", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x15) {
		sprintf(buf, "CLR     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xC2) {
		sprintf(buf, "CMP     A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC1) {
		sprintf(buf, "CMP     %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC3) {
		sprintf(buf, "CMP     %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xC0) {
		sprintf(buf, "CMP     %s, #0%04xh", get_ram_label(op[1], 2), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xAC) {
		sprintf(buf, "CMPC    A, [%s]", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xAD) {
		sprintf(buf, "CMPC    A, 0%04xh[%s]", (op[4]<<8)|op[3], get_ram_label(op[1], 2));
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xAE) {
		sprintf(buf, "CMPCB   A, [%s]", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xAF) {
		sprintf(buf, "CMPCB   A, 0%04xh[%s]", (op[4]<<8)|op[3], get_ram_label(op[1], 2));
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x17) {
		sprintf(buf, "DEC     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x16) {
		sprintf(buf, "INC     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x22) {
		sprintf(buf, "J       [%s]", get_ram_label(op[1], 2));
		return 3;
	}
	if(1 && op[2]==0xA8) {
		sprintf(buf, "LC      A, [%s]", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA9) {
		sprintf(buf, "LC      A, 0%04xh[%s]", (op[4]<<8)|op[3], get_ram_label(op[1], 2));
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xAA) {
		sprintf(buf, "LCB     A, [%s]", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xAB) {
		sprintf(buf, "LCB     A, 0%04xh[%s]", (op[4]<<8)|op[3], get_ram_label(op[1], 2));
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x99) {
		sprintf(buf, "MOV     A, %s", get_ram_label(op[1], 2));
		D->dd = 1;
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7A) {
		sprintf(buf, "MOV     DP, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x48) {
		sprintf(buf, "MOV     er0, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x49) {
		sprintf(buf, "MOV     er1, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4A) {
		sprintf(buf, "MOV     er2, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4B) {
		sprintf(buf, "MOV     er3, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7F) {
		sprintf(buf, "MOV     LRB, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x8A) {
		sprintf(buf, "MOV     %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x98) {
		sprintf(buf, "MOV     %s, #0%04xh", get_ram_label(op[1], 2), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0x7C) {
		sprintf(buf, "MOV     off(%s), %s", get_ram_label(((D->lrb>>5)<<8)|op[3], 4), get_ram_label(op[1], 2));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x7D) {
		sprintf(buf, "MOV     PSW, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7E) {
		sprintf(buf, "MOV     SSP, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7B) {
		sprintf(buf, "MOV     USP, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x78) {
		sprintf(buf, "MOV     X1, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x79) {
		sprintf(buf, "MOV     X2, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xE2) {
		sprintf(buf, "OR      A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE1) {
		sprintf(buf, "OR      %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE3) {
		sprintf(buf, "OR      %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD0) {
		sprintf(buf, "OR      %s, #0%04xh", get_ram_label(op[1], 2), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xB7) {
		sprintf(buf, "ROL     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC7) {
		sprintf(buf, "ROR     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xB2) {
		sprintf(buf, "SBC     A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB1) {
		sprintf(buf, "SBC     %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB3) {
		sprintf(buf, "SBC     %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xB0) {
		sprintf(buf, "SBC     %s, #0%04xh", get_ram_label(op[1], 2), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[2]==0xD7) {
		sprintf(buf, "SLL     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF7) {
		sprintf(buf, "SRA     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE7) {
		sprintf(buf, "SRL     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xA2) {
		sprintf(buf, "SUB     A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA1) {
		sprintf(buf, "SUB     %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xA3) {
		sprintf(buf, "SUB     %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xA0) {
		sprintf(buf, "SUB     %s, #0%04xh", get_ram_label(op[1], 2), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	if(D->dd == 1 && op[2]==0x10) {
		sprintf(buf, "XCHG    A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 1 && op[2]==0xF2) {
		sprintf(buf, "XOR     A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF1) {
		sprintf(buf, "XOR     %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF3) {
		sprintf(buf, "XOR     %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xF0) {
		sprintf(buf, "XOR     %s, #0%04xh", get_ram_label(op[1], 2), (op[4]<<8)|op[3]);
		D->pc += 5;
		return 5;
	}
	return -1;
}

int dasmfunc_b6(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SBC     A, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_b7(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "SBC     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "SBCB    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_b8(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DECB    r0");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_b9(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DECB    r1");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_ba(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DECB    r2");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_bb(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DECB    r3");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_bc(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DECB    r4");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_bd(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DECB    r5");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_be(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DECB    r6");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_bf(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DECB    r7");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_c0(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0 && op[3]==0x92) {
		sprintf(buf, "ADCB    A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x91) {
		sprintf(buf, "ADCB    0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x93) {
		sprintf(buf, "ADCB    0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x90) {
		sprintf(buf, "ADCB    0%04xh[X1], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(D->dd == 0 && op[3]==0x82) {
		sprintf(buf, "ADDB    A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x81) {
		sprintf(buf, "ADDB    0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x83) {
		sprintf(buf, "ADDB    0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x80) {
		sprintf(buf, "ADDB    0%04xh[X1], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(D->dd == 0 && op[3]==0xD2) {
		sprintf(buf, "ANDB    A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xD1) {
		sprintf(buf, "ANDB    0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xD3) {
		sprintf(buf, "ANDB    0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xD0) {
		sprintf(buf, "ANDB    0%04xh[X1], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x15) {
		sprintf(buf, "CLRB    0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xC2) {
		sprintf(buf, "CMPB    A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC1) {
		sprintf(buf, "CMPB    0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC3) {
		sprintf(buf, "CMPB    0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xC0) {
		sprintf(buf, "CMPB    0%04xh[X1], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x17) {
		sprintf(buf, "DECB    0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x16) {
		sprintf(buf, "INCB    0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x28) {
		sprintf(buf, "MB      C, 0%04xh[X1].0", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x29) {
		sprintf(buf, "MB      C, 0%04xh[X1].1", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2A) {
		sprintf(buf, "MB      C, 0%04xh[X1].2", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2B) {
		sprintf(buf, "MB      C, 0%04xh[X1].3", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2C) {
		sprintf(buf, "MB      C, 0%04xh[X1].4", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2D) {
		sprintf(buf, "MB      C, 0%04xh[X1].5", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2E) {
		sprintf(buf, "MB      C, 0%04xh[X1].6", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2F) {
		sprintf(buf, "MB      C, 0%04xh[X1].7", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x38) {
		sprintf(buf, "MB      0%04xh[X1].0, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x39) {
		sprintf(buf, "MB      0%04xh[X1].1, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3A) {
		sprintf(buf, "MB      0%04xh[X1].2, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3B) {
		sprintf(buf, "MB      0%04xh[X1].3, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3C) {
		sprintf(buf, "MB      0%04xh[X1].4, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3D) {
		sprintf(buf, "MB      0%04xh[X1].5, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3E) {
		sprintf(buf, "MB      0%04xh[X1].6, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3F) {
		sprintf(buf, "MB      0%04xh[X1].7, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x21) {
		sprintf(buf, "MBR     C, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x20) {
		sprintf(buf, "MBR     0%04xh[X1], C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x99) {
		sprintf(buf, "MOVB    A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->dd = 0;
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x8A) {
		sprintf(buf, "MOVB    0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7C) {
		sprintf(buf, "MOVB    off(%s), 0%04xh[X1]", get_ram_label(((D->lrb>>5)<<8)|op[4], 4), (op[2]<<8)|op[1]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x98) {
		sprintf(buf, "MOVB    0%04xh[X1], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x89) {
		sprintf(buf, "MOVB    PSWH, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x88) {
		sprintf(buf, "MOVB    PSWL, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x48) {
		sprintf(buf, "MOVB    r0, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x49) {
		sprintf(buf, "MOVB    r1, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4A) {
		sprintf(buf, "MOVB    r2, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4B) {
		sprintf(buf, "MOVB    r3, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4C) {
		sprintf(buf, "MOVB    r4, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4D) {
		sprintf(buf, "MOVB    r5, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4E) {
		sprintf(buf, "MOVB    r6, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4F) {
		sprintf(buf, "MOVB    r7, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xE2) {
		sprintf(buf, "ORB     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE1) {
		sprintf(buf, "ORB     0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE3) {
		sprintf(buf, "ORB     0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xE0) {
		sprintf(buf, "ORB     0%04xh[X1], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x08) {
		sprintf(buf, "RB      0%04xh[X1].0", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x09) {
		sprintf(buf, "RB      0%04xh[X1].1", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0A) {
		sprintf(buf, "RB      0%04xh[X1].2", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0B) {
		sprintf(buf, "RB      0%04xh[X1].3", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0C) {
		sprintf(buf, "RB      0%04xh[X1].4", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0D) {
		sprintf(buf, "RB      0%04xh[X1].5", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0E) {
		sprintf(buf, "RB      0%04xh[X1].6", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0F) {
		sprintf(buf, "RB      0%04xh[X1].7", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x12) {
		sprintf(buf, "RBR     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB7) {
		sprintf(buf, "ROLB    0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC7) {
		sprintf(buf, "RORB    0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x18) {
		sprintf(buf, "SB      0%04xh[X1].0", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x19) {
		sprintf(buf, "SB      0%04xh[X1].1", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1A) {
		sprintf(buf, "SB      0%04xh[X1].2", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1B) {
		sprintf(buf, "SB      0%04xh[X1].3", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1C) {
		sprintf(buf, "SB      0%04xh[X1].4", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1D) {
		sprintf(buf, "SB      0%04xh[X1].5", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1E) {
		sprintf(buf, "SB      0%04xh[X1].6", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1F) {
		sprintf(buf, "SB      0%04xh[X1].7", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xB2) {
		sprintf(buf, "SBCB    A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB1) {
		sprintf(buf, "SBCB    0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB3) {
		sprintf(buf, "SBCB    0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xB0) {
		sprintf(buf, "SBCB    0%04xh[X1], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x11) {
		sprintf(buf, "SBR     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xD7) {
		sprintf(buf, "SLLB    0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF7) {
		sprintf(buf, "SRAB    0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE7) {
		sprintf(buf, "SRLB    0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xA2) {
		sprintf(buf, "SUBB    A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xA1) {
		sprintf(buf, "SUBB    0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xA3) {
		sprintf(buf, "SUBB    0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xA0) {
		sprintf(buf, "SUBB    0%04xh[X1], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x13) {
		sprintf(buf, "TRB     0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0x10) {
		sprintf(buf, "XCHGB   A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xF2) {
		sprintf(buf, "XORB    A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF1) {
		sprintf(buf, "XORB    0%04xh[X1], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF3) {
		sprintf(buf, "XORB    0%04xh[X1], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xF0) {
		sprintf(buf, "XORB    0%04xh[X1], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	return -1;
}

int dasmfunc_c1(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0 && op[3]==0x92) {
		sprintf(buf, "ADCB    A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x91) {
		sprintf(buf, "ADCB    0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x93) {
		sprintf(buf, "ADCB    0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x90) {
		sprintf(buf, "ADCB    0%04xh[X2], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(D->dd == 0 && op[3]==0x82) {
		sprintf(buf, "ADDB    A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x81) {
		sprintf(buf, "ADDB    0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x83) {
		sprintf(buf, "ADDB    0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x80) {
		sprintf(buf, "ADDB    0%04xh[X2], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(D->dd == 0 && op[3]==0xD2) {
		sprintf(buf, "ANDB    A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xD1) {
		sprintf(buf, "ANDB    0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xD3) {
		sprintf(buf, "ANDB    0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xD0) {
		sprintf(buf, "ANDB    0%04xh[X2], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x15) {
		sprintf(buf, "CLRB    0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xC2) {
		sprintf(buf, "CMPB    A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC1) {
		sprintf(buf, "CMPB    0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC3) {
		sprintf(buf, "CMPB    0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xC0) {
		sprintf(buf, "CMPB    0%04xh[X2], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x17) {
		sprintf(buf, "DECB    0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x16) {
		sprintf(buf, "INCB    0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x28) {
		sprintf(buf, "MB      C, 0%04xh[X2].0", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x29) {
		sprintf(buf, "MB      C, 0%04xh[X2].1", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2A) {
		sprintf(buf, "MB      C, 0%04xh[X2].2", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2B) {
		sprintf(buf, "MB      C, 0%04xh[X2].3", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2C) {
		sprintf(buf, "MB      C, 0%04xh[X2].4", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2D) {
		sprintf(buf, "MB      C, 0%04xh[X2].5", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2E) {
		sprintf(buf, "MB      C, 0%04xh[X2].6", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x2F) {
		sprintf(buf, "MB      C, 0%04xh[X2].7", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x38) {
		sprintf(buf, "MB      0%04xh[X2].0, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x39) {
		sprintf(buf, "MB      0%04xh[X2].1, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3A) {
		sprintf(buf, "MB      0%04xh[X2].2, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3B) {
		sprintf(buf, "MB      0%04xh[X2].3, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3C) {
		sprintf(buf, "MB      0%04xh[X2].4, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3D) {
		sprintf(buf, "MB      0%04xh[X2].5, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3E) {
		sprintf(buf, "MB      0%04xh[X2].6, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x3F) {
		sprintf(buf, "MB      0%04xh[X2].7, C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x21) {
		sprintf(buf, "MBR     C, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x20) {
		sprintf(buf, "MBR     0%04xh[X2], C", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x99) {
		sprintf(buf, "MOVB    A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->dd = 0;
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x8A) {
		sprintf(buf, "MOVB    0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x7C) {
		sprintf(buf, "MOVB    off(%s), 0%04xh[X2]", get_ram_label(((D->lrb>>5)<<8)|op[4], 4), (op[2]<<8)|op[1]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x98) {
		sprintf(buf, "MOVB    0%04xh[X2], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x89) {
		sprintf(buf, "MOVB    PSWH, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x88) {
		sprintf(buf, "MOVB    PSWL, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x48) {
		sprintf(buf, "MOVB    r0, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x49) {
		sprintf(buf, "MOVB    r1, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4A) {
		sprintf(buf, "MOVB    r2, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4B) {
		sprintf(buf, "MOVB    r3, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4C) {
		sprintf(buf, "MOVB    r4, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4D) {
		sprintf(buf, "MOVB    r5, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4E) {
		sprintf(buf, "MOVB    r6, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x4F) {
		sprintf(buf, "MOVB    r7, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xE2) {
		sprintf(buf, "ORB     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE1) {
		sprintf(buf, "ORB     0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE3) {
		sprintf(buf, "ORB     0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xE0) {
		sprintf(buf, "ORB     0%04xh[X2], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x08) {
		sprintf(buf, "RB      0%04xh[X2].0", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x09) {
		sprintf(buf, "RB      0%04xh[X2].1", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0A) {
		sprintf(buf, "RB      0%04xh[X2].2", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0B) {
		sprintf(buf, "RB      0%04xh[X2].3", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0C) {
		sprintf(buf, "RB      0%04xh[X2].4", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0D) {
		sprintf(buf, "RB      0%04xh[X2].5", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0E) {
		sprintf(buf, "RB      0%04xh[X2].6", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x0F) {
		sprintf(buf, "RB      0%04xh[X2].7", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x12) {
		sprintf(buf, "RBR     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB7) {
		sprintf(buf, "ROLB    0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xC7) {
		sprintf(buf, "RORB    0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x18) {
		sprintf(buf, "SB      0%04xh[X2].0", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x19) {
		sprintf(buf, "SB      0%04xh[X2].1", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1A) {
		sprintf(buf, "SB      0%04xh[X2].2", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1B) {
		sprintf(buf, "SB      0%04xh[X2].3", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1C) {
		sprintf(buf, "SB      0%04xh[X2].4", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1D) {
		sprintf(buf, "SB      0%04xh[X2].5", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1E) {
		sprintf(buf, "SB      0%04xh[X2].6", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0x1F) {
		sprintf(buf, "SB      0%04xh[X2].7", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xB2) {
		sprintf(buf, "SBCB    A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB1) {
		sprintf(buf, "SBCB    0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xB3) {
		sprintf(buf, "SBCB    0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xB0) {
		sprintf(buf, "SBCB    0%04xh[X2], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x11) {
		sprintf(buf, "SBR     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xD7) {
		sprintf(buf, "SLLB    0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF7) {
		sprintf(buf, "SRAB    0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xE7) {
		sprintf(buf, "SRLB    0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xA2) {
		sprintf(buf, "SUBB    A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xA1) {
		sprintf(buf, "SUBB    0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xA3) {
		sprintf(buf, "SUBB    0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xA0) {
		sprintf(buf, "SUBB    0%04xh[X2], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0x13) {
		sprintf(buf, "TRB     0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0x10) {
		sprintf(buf, "XCHGB   A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[3]==0xF2) {
		sprintf(buf, "XORB    A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF1) {
		sprintf(buf, "XORB    0%04xh[X2], A", (op[2]<<8)|op[1]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[3]==0xF3) {
		sprintf(buf, "XORB    0%04xh[X2], off(%s)", (op[2]<<8)|op[1], get_ram_label(((D->lrb>>5)<<8)|op[4], 4));
		D->pc += 5;
		return 5;
	}
	if(1 && op[3]==0xF0) {
		sprintf(buf, "XORB    0%04xh[X2], #0%02xh", (op[2]<<8)|op[1], op[4]);
		D->pc += 5;
		return 5;
	}
	return -1;
}

int dasmfunc_c2(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0 && op[1]==0x97) {
		sprintf(buf, "ADCB    A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x91) {
		sprintf(buf, "ADCB    [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x93) {
		sprintf(buf, "ADCB    [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x90) {
		sprintf(buf, "ADCB    [DP], #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[1]==0x82) {
		sprintf(buf, "ADDB    A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x81) {
		sprintf(buf, "ADDB    [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x83) {
		sprintf(buf, "ADDB    [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x80) {
		sprintf(buf, "ADDB    [DP], #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[1]==0xD2) {
		sprintf(buf, "ANDB    A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD1) {
		sprintf(buf, "ANDB    [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD3) {
		sprintf(buf, "ANDB    [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xD0) {
		sprintf(buf, "ANDB    [DP], #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x15) {
		sprintf(buf, "CLRB    [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xC2) {
		sprintf(buf, "CMPB    A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC1) {
		sprintf(buf, "CMPB    [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC3) {
		sprintf(buf, "CMPB    [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xC0) {
		sprintf(buf, "CMPB    [DP], #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x17) {
		sprintf(buf, "DECB    [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x16) {
		sprintf(buf, "INCB    [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x28) {
		sprintf(buf, "MB      C, [DP].0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x29) {
		sprintf(buf, "MB      C, [DP].1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2A) {
		sprintf(buf, "MB      C, [DP].2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2B) {
		sprintf(buf, "MB      C, [DP].3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2C) {
		sprintf(buf, "MB      C, [DP].4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2D) {
		sprintf(buf, "MB      C, [DP].5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2E) {
		sprintf(buf, "MB      C, [DP].6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x2F) {
		sprintf(buf, "MB      C, [DP].7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x38) {
		sprintf(buf, "MB      [DP].0, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x39) {
		sprintf(buf, "MB      [DP].1, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3A) {
		sprintf(buf, "MB      [DP].2, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3B) {
		sprintf(buf, "MB      [DP].3, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3C) {
		sprintf(buf, "MB      [DP].4, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3D) {
		sprintf(buf, "MB      [DP].5, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3E) {
		sprintf(buf, "MB      [DP].6, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x3F) {
		sprintf(buf, "MB      [DP].7, C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x21) {
		sprintf(buf, "MBR     C, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x20) {
		sprintf(buf, "MBR     [DP], C");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x99) {
		sprintf(buf, "MOVB    A, [DP]");
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x8A) {
		sprintf(buf, "MOVB    [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x7C) {
		sprintf(buf, "MOVB    off(%s), [DP]", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x98) {
		sprintf(buf, "MOVB    [DP], #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x89) {
		sprintf(buf, "MOVB    PSWH, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x88) {
		sprintf(buf, "MOVB    PSWL, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x48) {
		sprintf(buf, "MOVB    r0, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x49) {
		sprintf(buf, "MOVB    r1, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4A) {
		sprintf(buf, "MOVB    r2, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4B) {
		sprintf(buf, "MOVB    r3, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4C) {
		sprintf(buf, "MOVB    r4, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4D) {
		sprintf(buf, "MOVB    r5, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4E) {
		sprintf(buf, "MOVB    r6, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x4F) {
		sprintf(buf, "MOVB    r7, [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xE2) {
		sprintf(buf, "ORB     A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE1) {
		sprintf(buf, "ORB     [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE3) {
		sprintf(buf, "ORB     [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xE0) {
		sprintf(buf, "ORB     [DP], #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x08) {
		sprintf(buf, "RB      [DP].0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x09) {
		sprintf(buf, "RB      [DP].1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0A) {
		sprintf(buf, "RB      [DP].2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0B) {
		sprintf(buf, "RB      [DP].3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0C) {
		sprintf(buf, "RB      [DP].4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0D) {
		sprintf(buf, "RB      [DP].5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0E) {
		sprintf(buf, "RB      [DP].6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x0F) {
		sprintf(buf, "RB      [DP].7");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x12) {
		sprintf(buf, "RBR     [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB7) {
		sprintf(buf, "ROLB    [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xC7) {
		sprintf(buf, "RORB    [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x18) {
		sprintf(buf, "SB      [DP].0");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x19) {
		sprintf(buf, "SB      [DP].1");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1A) {
		sprintf(buf, "SB      [DP].2");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1B) {
		sprintf(buf, "SB      [DP].3");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1C) {
		sprintf(buf, "SB      [DP].4");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1D) {
		sprintf(buf, "SB      [DP].5");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1E) {
		sprintf(buf, "SB      [DP].6");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0x1F) {
		sprintf(buf, "SB      [DP].7");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xB2) {
		sprintf(buf, "SBCB    A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB1) {
		sprintf(buf, "SBCB    [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xB3) {
		sprintf(buf, "SBCB    [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xB0) {
		sprintf(buf, "SBCB    [DP], #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x11) {
		sprintf(buf, "SBR     [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xD7) {
		sprintf(buf, "SLLB    [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF7) {
		sprintf(buf, "SRAB    [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xE7) {
		sprintf(buf, "SRLB    [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xA2) {
		sprintf(buf, "SUBB    A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA1) {
		sprintf(buf, "SUBB    [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xA3) {
		sprintf(buf, "SUBB    [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xA0) {
		sprintf(buf, "SUBB    [DP], #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0x13) {
		sprintf(buf, "TRB     [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0x10) {
		sprintf(buf, "XCHGB   A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0 && op[1]==0xF2) {
		sprintf(buf, "XORB    A, [DP]");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF1) {
		sprintf(buf, "XORB    [DP], A");
		D->pc += 2;
		return 2;
	}
	if(1 && op[1]==0xF3) {
		sprintf(buf, "XORB    [DP], off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[2], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[1]==0xF0) {
		sprintf(buf, "XORB    [DP], #0%02xh", op[2]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_c3(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0 && op[2]==0x92) {
		sprintf(buf, "ADCB    A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x91) {
		sprintf(buf, "ADCB    (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x93) {
		sprintf(buf, "ADCB    (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x90) {
		sprintf(buf, "ADCB    (%s-0%04xh)[USP], #0%02xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, op[3]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[2]==0x82) {
		sprintf(buf, "ADDB    A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x81) {
		sprintf(buf, "ADDB    (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x83) {
		sprintf(buf, "ADDB    (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x80) {
		sprintf(buf, "ADDB    (%s-0%04xh)[USP], #0%02xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, op[3]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[2]==0xD2) {
		sprintf(buf, "ANDB    A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD1) {
		sprintf(buf, "ANDB    (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD3) {
		sprintf(buf, "ANDB    (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD0) {
		sprintf(buf, "ANDB    (%s-0%04xh)[USP], #0%02xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x15) {
		sprintf(buf, "CLRB    (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xC2) {
		sprintf(buf, "CMPB    A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC1) {
		sprintf(buf, "CMPB    (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC3) {
		sprintf(buf, "CMPB    (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xC0) {
		sprintf(buf, "CMPB    (%s-0%04xh)[USP], #0%02xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x17) {
		sprintf(buf, "DECB    (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x16) {
		sprintf(buf, "INCB    (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x28) {
		sprintf(buf, "MB      C, (%s-0%04xh)[USP].0", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x29) {
		sprintf(buf, "MB      C, (%s-0%04xh)[USP].1", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2A) {
		sprintf(buf, "MB      C, (%s-0%04xh)[USP].2", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2B) {
		sprintf(buf, "MB      C, (%s-0%04xh)[USP].3", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2C) {
		sprintf(buf, "MB      C, (%s-0%04xh)[USP].4", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2D) {
		sprintf(buf, "MB      C, (%s-0%04xh)[USP].5", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2E) {
		sprintf(buf, "MB      C, (%s-0%04xh)[USP].6", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2F) {
		sprintf(buf, "MB      C, (%s-0%04xh)[USP].7", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x38) {
		sprintf(buf, "MB      (%s-0%04xh)[USP].0, C", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x39) {
		sprintf(buf, "MB      (%s-0%04xh)[USP].1, C", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3A) {
		sprintf(buf, "MB      (%s-0%04xh)[USP].2, C", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3B) {
		sprintf(buf, "MB      (%s-0%04xh)[USP].3, C", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3C) {
		sprintf(buf, "MB      (%s-0%04xh)[USP].4, C", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3D) {
		sprintf(buf, "MB      (%s-0%04xh)[USP].5, C", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3E) {
		sprintf(buf, "MB      (%s-0%04xh)[USP].6, C", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3F) {
		sprintf(buf, "MB      (%s-0%04xh)[USP].7, C", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x21) {
		sprintf(buf, "MBR     C, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x20) {
		sprintf(buf, "MBR     (%s-0%04xh)[USP], C", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x99) {
		sprintf(buf, "MOVB    A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->dd = 0;
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x8A) {
		sprintf(buf, "MOVB    (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7C) {
		sprintf(buf, "MOVB    off(%s), (%s-0%04xh)[USP]", get_ram_label(((D->lrb>>5)<<8)|op[3], 4), get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x98) {
		sprintf(buf, "MOVB    (%s-0%04xh)[USP], #0%02xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x89) {
		sprintf(buf, "MOVB    PSWH, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x88) {
		sprintf(buf, "MOVB    PSWL, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x48) {
		sprintf(buf, "MOVB    r0, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x49) {
		sprintf(buf, "MOVB    r1, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4A) {
		sprintf(buf, "MOVB    r2, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4B) {
		sprintf(buf, "MOVB    r3, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4C) {
		sprintf(buf, "MOVB    r4, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4D) {
		sprintf(buf, "MOVB    r5, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4E) {
		sprintf(buf, "MOVB    r6, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4F) {
		sprintf(buf, "MOVB    r7, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xE2) {
		sprintf(buf, "ORB     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE1) {
		sprintf(buf, "ORB     (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE3) {
		sprintf(buf, "ORB     (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xE0) {
		sprintf(buf, "ORB     (%s-0%04xh)[USP], #0%02xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x08) {
		sprintf(buf, "RB      (%s-0%04xh)[USP].0", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x09) {
		sprintf(buf, "RB      (%s-0%04xh)[USP].1", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0A) {
		sprintf(buf, "RB      (%s-0%04xh)[USP].2", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0B) {
		sprintf(buf, "RB      (%s-0%04xh)[USP].3", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0C) {
		sprintf(buf, "RB      (%s-0%04xh)[USP].4", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0D) {
		sprintf(buf, "RB      (%s-0%04xh)[USP].5", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0E) {
		sprintf(buf, "RB      (%s-0%04xh)[USP].6", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0F) {
		sprintf(buf, "RB      (%s-0%04xh)[USP].7", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x12) {
		sprintf(buf, "RBR     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB7) {
		sprintf(buf, "ROLB    (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC7) {
		sprintf(buf, "RORB    (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x18) {
		sprintf(buf, "SB      (%s-0%04xh)[USP].0", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x19) {
		sprintf(buf, "SB      (%s-0%04xh)[USP].1", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1A) {
		sprintf(buf, "SB      (%s-0%04xh)[USP].2", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1B) {
		sprintf(buf, "SB      (%s-0%04xh)[USP].3", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1C) {
		sprintf(buf, "SB      (%s-0%04xh)[USP].4", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1D) {
		sprintf(buf, "SB      (%s-0%04xh)[USP].5", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1E) {
		sprintf(buf, "SB      (%s-0%04xh)[USP].6", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1F) {
		sprintf(buf, "SB      (%s-0%04xh)[USP].7", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xB2) {
		sprintf(buf, "SBCB    A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB1) {
		sprintf(buf, "SBCB    (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB3) {
		sprintf(buf, "SBCB    (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xB0) {
		sprintf(buf, "SBCB    (%s-0%04xh)[USP], #0%02xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x11) {
		sprintf(buf, "SBR     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD7) {
		sprintf(buf, "SLLB    (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF7) {
		sprintf(buf, "SRAB    (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE7) {
		sprintf(buf, "SRLB    (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xA2) {
		sprintf(buf, "SUBB    A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA1) {
		sprintf(buf, "SUBB    (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA3) {
		sprintf(buf, "SUBB    (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xA0) {
		sprintf(buf, "SUBB    (%s-0%04xh)[USP], #0%02xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x13) {
		sprintf(buf, "TRB     (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0x10) {
		sprintf(buf, "XCHGB   A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xF2) {
		sprintf(buf, "XORB    A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF1) {
		sprintf(buf, "XORB    (%s-0%04xh)[USP], A", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF3) {
		sprintf(buf, "XORB    (%s-0%04xh)[USP], off(%s)", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xF0) {
		sprintf(buf, "XORB    (%s-0%04xh)[USP], #0%02xh", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp, op[3]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_c4(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1 && op[2]==0x91) {
		sprintf(buf, "ADCB    off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x93) {
		sprintf(buf, "ADCB    off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x90) {
		sprintf(buf, "ADCB    off(%s), #0%02xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x81) {
		sprintf(buf, "ADDB    off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x83) {
		sprintf(buf, "ADDB    off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x80) {
		sprintf(buf, "ADDB    off(%s), #0%02xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD1) {
		sprintf(buf, "ANDB    off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD3) {
		sprintf(buf, "ANDB    off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD0) {
		sprintf(buf, "ANDB    off(%s), #0%02xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x15) {
		sprintf(buf, "CLRB    off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC1) {
		sprintf(buf, "CMPB    off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC3) {
		sprintf(buf, "CMPB    off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xC0) {
		sprintf(buf, "CMPB    off(%s), #0%02xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x17) {
		sprintf(buf, "DECB    off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x16) {
		sprintf(buf, "INCB    off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x28) {
		sprintf(buf, "MB      C, off(%s).0", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x29) {
		sprintf(buf, "MB      C, off(%s).1", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2A) {
		sprintf(buf, "MB      C, off(%s).2", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2B) {
		sprintf(buf, "MB      C, off(%s).3", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2C) {
		sprintf(buf, "MB      C, off(%s).4", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2D) {
		sprintf(buf, "MB      C, off(%s).5", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2E) {
		sprintf(buf, "MB      C, off(%s).6", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2F) {
		sprintf(buf, "MB      C, off(%s).7", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x38) {
		sprintf(buf, "MB      off(%s).0, C", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x39) {
		sprintf(buf, "MB      off(%s).1, C", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3A) {
		sprintf(buf, "MB      off(%s).2, C", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3B) {
		sprintf(buf, "MB      off(%s).3, C", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3C) {
		sprintf(buf, "MB      off(%s).4, C", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3D) {
		sprintf(buf, "MB      off(%s).5, C", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3E) {
		sprintf(buf, "MB      off(%s).6, C", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3F) {
		sprintf(buf, "MB      off(%s).7, C", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x21) {
		sprintf(buf, "MBR     C, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x99) {
		sprintf(buf, "MOVB    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->dd = 0;
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x8A) {
		sprintf(buf, "MOVB    off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7C) {
		sprintf(buf, "MOVB    off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[3], 4), get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x98) {
		sprintf(buf, "MOVB    off(%s), #0%02xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x89) {
		sprintf(buf, "MOVB    PSWH, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x88) {
		sprintf(buf, "MOVB    PSWL, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x48) {
		sprintf(buf, "MOVB    r0, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x49) {
		sprintf(buf, "MOVB    r1, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4A) {
		sprintf(buf, "MOVB    r2, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4B) {
		sprintf(buf, "MOVB    r3, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4C) {
		sprintf(buf, "MOVB    r4, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4D) {
		sprintf(buf, "MOVB    r5, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4E) {
		sprintf(buf, "MOVB    r6, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4F) {
		sprintf(buf, "MOVB    r7, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE1) {
		sprintf(buf, "ORB     off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE3) {
		sprintf(buf, "ORB     off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xE0) {
		sprintf(buf, "ORB     off(%s), #0%02xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x08) {
		sprintf(buf, "RB      off(%s).0", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x09) {
		sprintf(buf, "RB      off(%s).1", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0A) {
		sprintf(buf, "RB      off(%s).2", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0B) {
		sprintf(buf, "RB      off(%s).3", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0C) {
		sprintf(buf, "RB      off(%s).4", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0D) {
		sprintf(buf, "RB      off(%s).5", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0E) {
		sprintf(buf, "RB      off(%s).6", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0F) {
		sprintf(buf, "RB      off(%s).7", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x12) {
		sprintf(buf, "RBR     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB7) {
		sprintf(buf, "ROLB    off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC7) {
		sprintf(buf, "RORB    off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x18) {
		sprintf(buf, "SB      off(%s).0", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x19) {
		sprintf(buf, "SB      off(%s).1", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1A) {
		sprintf(buf, "SB      off(%s).2", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1B) {
		sprintf(buf, "SB      off(%s).3", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1C) {
		sprintf(buf, "SB      off(%s).4", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1D) {
		sprintf(buf, "SB      off(%s).5", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1E) {
		sprintf(buf, "SB      off(%s).6", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1F) {
		sprintf(buf, "SB      off(%s).7", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB1) {
		sprintf(buf, "SBCB    off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB3) {
		sprintf(buf, "SBCB    off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xB0) {
		sprintf(buf, "SBCB    off(%s), #0%02xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x11) {
		sprintf(buf, "SBR     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD7) {
		sprintf(buf, "SLLB    off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF7) {
		sprintf(buf, "SRAB    off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE7) {
		sprintf(buf, "SRLB    off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA1) {
		sprintf(buf, "SUBB    off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA3) {
		sprintf(buf, "SUBB    off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xA0) {
		sprintf(buf, "SUBB    off(%s), #0%02xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x13) {
		sprintf(buf, "TRB     off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0x10) {
		sprintf(buf, "XCHGB   A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF1) {
		sprintf(buf, "XORB    off(%s), A", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF3) {
		sprintf(buf, "XORB    off(%s), off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xF0) {
		sprintf(buf, "XORB    off(%s), #0%02xh", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), op[3]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_c5(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0 && op[2]==0x92) {
		sprintf(buf, "ADCB    A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x91) {
		sprintf(buf, "ADCB    %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x93) {
		sprintf(buf, "ADCB    %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x90) {
		sprintf(buf, "ADCB    %s, #0%02xh", get_ram_label(op[1], 2), op[3]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[2]==0x82) {
		sprintf(buf, "ADDB    A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x81) {
		sprintf(buf, "ADDB    %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x83) {
		sprintf(buf, "ADDB    %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x80) {
		sprintf(buf, "ADDB    %s, #0%02xh", get_ram_label(op[1], 2), op[3]);
		D->pc += 4;
		return 4;
	}
	if(D->dd == 0 && op[2]==0xD2) {
		sprintf(buf, "ANDB    A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD1) {
		sprintf(buf, "ANDB    %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD3) {
		sprintf(buf, "ANDB    %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xD0) {
		sprintf(buf, "ANDB    %s, #0%02xh", get_ram_label(op[1], 2), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x15) {
		sprintf(buf, "CLRB    %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xC2) {
		sprintf(buf, "CMPB    A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC1) {
		sprintf(buf, "CMPB    %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC3) {
		sprintf(buf, "CMPB    %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xC0) {
		sprintf(buf, "CMPB    %s, #0%02xh", get_ram_label(op[1], 2), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x17) {
		sprintf(buf, "DECB    %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x16) {
		sprintf(buf, "INCB    %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x28) {
		sprintf(buf, "MB      C, %s.0", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x29) {
		sprintf(buf, "MB      C, %s.1", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2A) {
		sprintf(buf, "MB      C, %s.2", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2B) {
		sprintf(buf, "MB      C, %s.3", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2C) {
		sprintf(buf, "MB      C, %s.4", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2D) {
		sprintf(buf, "MB      C, %s.5", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2E) {
		sprintf(buf, "MB      C, %s.6", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x2F) {
		sprintf(buf, "MB      C, %s.7", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x38) {
		sprintf(buf, "MB      %s.0, C", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x39) {
		sprintf(buf, "MB      %s.1, C", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3A) {
		sprintf(buf, "MB      %s.2, C", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3B) {
		sprintf(buf, "MB      %s.3, C", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3C) {
		sprintf(buf, "MB      %s.4, C", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3D) {
		sprintf(buf, "MB      %s.5, C", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3E) {
		sprintf(buf, "MB      %s.6, C", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x3F) {
		sprintf(buf, "MB      %s.7, C", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x21) {
		sprintf(buf, "MBR     C, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x20) {
		sprintf(buf, "MBR     off(%s), C", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x20) {
		sprintf(buf, "MBR     %s, C", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x99) {
		sprintf(buf, "MOVB    A, %s", get_ram_label(op[1], 2));
		D->dd = 0;
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x8A) {
		sprintf(buf, "MOVB    %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x7C) {
		sprintf(buf, "MOVB    off(%s), %s", get_ram_label(((D->lrb>>5)<<8)|op[3], 4), get_ram_label(op[1], 2));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x98) {
		sprintf(buf, "MOVB    %s, #0%02xh", get_ram_label(op[1], 2), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x89) {
		sprintf(buf, "MOVB    PSWH, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x88) {
		sprintf(buf, "MOVB    PSWL, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x48) {
		sprintf(buf, "MOVB    r0, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x49) {
		sprintf(buf, "MOVB    r1, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4A) {
		sprintf(buf, "MOVB    r2, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4B) {
		sprintf(buf, "MOVB    r3, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4C) {
		sprintf(buf, "MOVB    r4, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4D) {
		sprintf(buf, "MOVB    r5, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4E) {
		sprintf(buf, "MOVB    r6, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x4F) {
		sprintf(buf, "MOVB    r7, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xE2) {
		sprintf(buf, "ORB     A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE1) {
		sprintf(buf, "ORB     %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE3) {
		sprintf(buf, "ORB     %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xE0) {
		sprintf(buf, "ORB     %s, #0%02xh", get_ram_label(op[1], 2), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x08) {
		sprintf(buf, "RB      %s.0", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x09) {
		sprintf(buf, "RB      %s.1", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0A) {
		sprintf(buf, "RB      %s.2", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0B) {
		sprintf(buf, "RB      %s.3", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0C) {
		sprintf(buf, "RB      %s.4", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0D) {
		sprintf(buf, "RB      %s.5", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0E) {
		sprintf(buf, "RB      %s.6", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x0F) {
		sprintf(buf, "RB      %s.7", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x12) {
		sprintf(buf, "RBR     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB7) {
		sprintf(buf, "ROLB    %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xC7) {
		sprintf(buf, "RORB    %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x18) {
		sprintf(buf, "SB      %s.0", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x19) {
		sprintf(buf, "SB      %s.1", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1A) {
		sprintf(buf, "SB      %s.2", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1B) {
		sprintf(buf, "SB      %s.3", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1C) {
		sprintf(buf, "SB      %s.4", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1D) {
		sprintf(buf, "SB      %s.5", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1E) {
		sprintf(buf, "SB      %s.6", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0x1F) {
		sprintf(buf, "SB      %s.7", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xB2) {
		sprintf(buf, "SBCB    A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB1) {
		sprintf(buf, "SBCB    %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xB3) {
		sprintf(buf, "SBCB    %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xB0) {
		sprintf(buf, "SBCB    %s, #0%02xh", get_ram_label(op[1], 2), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x11) {
		sprintf(buf, "SBR     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xD7) {
		sprintf(buf, "SLLB    %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF7) {
		sprintf(buf, "SRAB    %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xE7) {
		sprintf(buf, "SRLB    %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xA2) {
		sprintf(buf, "SUBB    A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA1) {
		sprintf(buf, "SUBB    %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xA3) {
		sprintf(buf, "SUBB    %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xA0) {
		sprintf(buf, "SUBB    %s, #0%02xh", get_ram_label(op[1], 2), op[3]);
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0x13) {
		sprintf(buf, "TRB     %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0x10) {
		sprintf(buf, "XCHGB   A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0 && op[2]==0xF2) {
		sprintf(buf, "XORB    A, %s", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF1) {
		sprintf(buf, "XORB    %s, A", get_ram_label(op[1], 2));
		D->pc += 3;
		return 3;
	}
	if(1 && op[2]==0xF3) {
		sprintf(buf, "XORB    %s, off(%s)", get_ram_label(op[1], 2), get_ram_label(((D->lrb>>5)<<8)|op[3], 4));
		D->pc += 4;
		return 4;
	}
	if(1 && op[2]==0xF0) {
		sprintf(buf, "XORB    %s, #0%02xh", get_ram_label(op[1], 2), op[3]);
		D->pc += 4;
		return 4;
	}
	return -1;
}

int dasmfunc_c6(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "CMP     A, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_c7(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "CMP     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "CMPB    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_c8(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JGT     %s", get_rom_label(D->pc+((signed char)op[1])+2));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_c9(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JEQ     %s", get_rom_label(D->pc+((signed char)op[1])+2));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_ca(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JLT     %s", get_rom_label(D->pc+((signed char)op[1])+2));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_cb(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "SJ      %s", get_rom_label(D->pc+((signed char)op[1])+2));
		return 2;
	}
	return -1;
}

int dasmfunc_cd(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JGE     %s", get_rom_label(D->pc+((signed char)op[1])+2));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_ce(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JNE     %s", get_rom_label(D->pc+((signed char)op[1])+2));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_cf(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JLE     %s", get_rom_label(D->pc+((signed char)op[1])+2));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_d0(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_d1(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_d2(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, [DP]");
		D->pc += 1;
		return 1;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, [DP]");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_d3(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_d4(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_d5(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "ST      A, %s", get_ram_label(op[1], 2));
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "STB     A, %s", get_ram_label(op[1], 2));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_d6(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "AND     A, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_d7(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "AND     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "ANDB    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_d8(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBR     off(%s).0, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_d9(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBR     off(%s).1, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_da(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBR     off(%s).2, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_db(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBR     off(%s).3, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_dc(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBR     off(%s).4, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_dd(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBR     off(%s).5, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_de(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBR     off(%s).6, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_df(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBR     off(%s).7, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_e0(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->dd = 1;
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_e1(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->dd = 1;
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_e2(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, [DP]");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_e3(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_e4(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_e5(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "L       A, %s", get_ram_label(op[1], 2));
		D->dd = 1;
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_e6(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "OR      A, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_e7(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 0) {
		sprintf(buf, "ORB     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_e8(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBS     off(%s).0, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_e9(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBS     off(%s).1, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_ea(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBS     off(%s).2, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_eb(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBS     off(%s).3, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_ec(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBS     off(%s).4, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_ed(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBS     off(%s).5, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_ee(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBS     off(%s).6, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_ef(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "JBS     off(%s).7, %s", get_ram_label(((D->lrb>>5)<<8)|op[1], 4), get_rom_label(D->pc+((signed char)op[2])+3));
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_f0(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, 0%04xh[X1]", (op[2]<<8)|op[1]);
		D->dd = 0;
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_f1(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, 0%04xh[X2]", (op[2]<<8)|op[1]);
		D->dd = 0;
		D->pc += 3;
		return 3;
	}
	return -1;
}

int dasmfunc_f2(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, [DP]");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_f3(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, (%s-0%04xh)[USP]", get_ram_label(D->usp+((signed char)op[1]), 4), D->usp);
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_f4(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_f5(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "LB      A, %s", get_ram_label(op[1], 2));
		D->dd = 0;
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_f6(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "XOR     A, #0%04xh", (op[2]<<8)|op[1]);
		D->pc += 3;
		return 3;
	}
	if(D->dd == 0) {
		sprintf(buf, "XORB    A, #0%02xh", op[1]);
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_f7(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(D->dd == 1) {
		sprintf(buf, "XOR     A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	if(D->dd == 0) {
		sprintf(buf, "XORB    A, off(%s)", get_ram_label(((D->lrb>>5)<<8)|op[1], 4));
		D->pc += 2;
		return 2;
	}
	return -1;
}

int dasmfunc_f8(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "EXTND");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_f9(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "CLR     A");
		D->dd = 1;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_fa(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "CLRB    A");
		D->dd = 0;
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_fd(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "INC     LRB");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_fe(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "DEC     LRB");
		D->pc += 1;
		return 1;
	}
	return -1;
}

int dasmfunc_ff(dasm_state *D, char *buf) {
	unsigned char *op = D->rom+D->pc;
	if(1) {
		sprintf(buf, "BRK");
		return 1;
	}
	return -1;
}

dasmfunc dasmtable[256] = {
	dasmfunc_00,
	dasmfunc_01,
	dasmfunc_02,
	dasmfunc_03,
	NULL, /* nothing for 04 */
	NULL, /* nothing for 05 */
	NULL, /* nothing for 06 */
	NULL, /* nothing for 07 */
	dasmfunc_08,
	dasmfunc_09,
	dasmfunc_0a,
	dasmfunc_0b,
	dasmfunc_0c,
	dasmfunc_0d,
	dasmfunc_0e,
	dasmfunc_0f,
	dasmfunc_10,
	dasmfunc_11,
	dasmfunc_12,
	dasmfunc_13,
	dasmfunc_14,
	dasmfunc_15,
	dasmfunc_16,
	dasmfunc_17,
	dasmfunc_18,
	dasmfunc_19,
	dasmfunc_1a,
	dasmfunc_1b,
	dasmfunc_1c,
	dasmfunc_1d,
	dasmfunc_1e,
	dasmfunc_1f,
	dasmfunc_20,
	dasmfunc_21,
	dasmfunc_22,
	dasmfunc_23,
	dasmfunc_24,
	dasmfunc_25,
	dasmfunc_26,
	dasmfunc_27,
	dasmfunc_28,
	dasmfunc_29,
	dasmfunc_2a,
	dasmfunc_2b,
	dasmfunc_2c,
	dasmfunc_2d,
	dasmfunc_2e,
	dasmfunc_2f,
	dasmfunc_30,
	dasmfunc_31,
	dasmfunc_32,
	dasmfunc_33,
	dasmfunc_34,
	dasmfunc_35,
	dasmfunc_36,
	dasmfunc_37,
	dasmfunc_38,
	dasmfunc_39,
	dasmfunc_3a,
	dasmfunc_3b,
	dasmfunc_3c,
	dasmfunc_3d,
	dasmfunc_3e,
	dasmfunc_3f,
	dasmfunc_40,
	dasmfunc_41,
	dasmfunc_42,
	dasmfunc_43,
	dasmfunc_44,
	dasmfunc_45,
	dasmfunc_46,
	dasmfunc_47,
	dasmfunc_48,
	dasmfunc_49,
	dasmfunc_4a,
	dasmfunc_4b,
	dasmfunc_4c,
	dasmfunc_4d,
	dasmfunc_4e,
	dasmfunc_4f,
	dasmfunc_50,
	dasmfunc_51,
	dasmfunc_52,
	dasmfunc_53,
	dasmfunc_54,
	dasmfunc_55,
	NULL, /* nothing for 56 */
	dasmfunc_57,
	dasmfunc_58,
	dasmfunc_59,
	dasmfunc_5a,
	dasmfunc_5b,
	dasmfunc_5c,
	dasmfunc_5d,
	dasmfunc_5e,
	dasmfunc_5f,
	dasmfunc_60,
	dasmfunc_61,
	dasmfunc_62,
	dasmfunc_63,
	dasmfunc_64,
	dasmfunc_65,
	NULL, /* nothing for 66 */
	dasmfunc_67,
	dasmfunc_68,
	dasmfunc_69,
	dasmfunc_6a,
	dasmfunc_6b,
	dasmfunc_6c,
	dasmfunc_6d,
	dasmfunc_6e,
	dasmfunc_6f,
	dasmfunc_70,
	dasmfunc_71,
	dasmfunc_72,
	dasmfunc_73,
	NULL, /* nothing for 74 */
	NULL, /* nothing for 75 */
	NULL, /* nothing for 76 */
	dasmfunc_77,
	dasmfunc_78,
	dasmfunc_79,
	dasmfunc_7a,
	dasmfunc_7b,
	dasmfunc_7c,
	dasmfunc_7d,
	dasmfunc_7e,
	dasmfunc_7f,
	dasmfunc_80,
	dasmfunc_81,
	dasmfunc_82,
	dasmfunc_83,
	dasmfunc_84,
	dasmfunc_85,
	dasmfunc_86,
	dasmfunc_87,
	dasmfunc_88,
	dasmfunc_89,
	dasmfunc_8a,
	dasmfunc_8b,
	dasmfunc_8c,
	dasmfunc_8d,
	dasmfunc_8e,
	dasmfunc_8f,
	dasmfunc_90,
	dasmfunc_91,
	dasmfunc_92,
	dasmfunc_93,
	dasmfunc_94,
	dasmfunc_95,
	dasmfunc_96,
	dasmfunc_97,
	dasmfunc_98,
	dasmfunc_99,
	dasmfunc_9a,
	dasmfunc_9b,
	dasmfunc_9c,
	dasmfunc_9d,
	dasmfunc_9e,
	dasmfunc_9f,
	dasmfunc_a0,
	dasmfunc_a1,
	dasmfunc_a2,
	dasmfunc_a3,
	dasmfunc_a4,
	NULL, /* nothing for a5 */
	dasmfunc_a6,
	dasmfunc_a7,
	dasmfunc_a8,
	dasmfunc_a9,
	dasmfunc_aa,
	dasmfunc_ab,
	dasmfunc_ac,
	dasmfunc_ad,
	dasmfunc_ae,
	dasmfunc_af,
	dasmfunc_b0,
	dasmfunc_b1,
	dasmfunc_b2,
	dasmfunc_b3,
	dasmfunc_b4,
	dasmfunc_b5,
	dasmfunc_b6,
	dasmfunc_b7,
	dasmfunc_b8,
	dasmfunc_b9,
	dasmfunc_ba,
	dasmfunc_bb,
	dasmfunc_bc,
	dasmfunc_bd,
	dasmfunc_be,
	dasmfunc_bf,
	dasmfunc_c0,
	dasmfunc_c1,
	dasmfunc_c2,
	dasmfunc_c3,
	dasmfunc_c4,
	dasmfunc_c5,
	dasmfunc_c6,
	dasmfunc_c7,
	dasmfunc_c8,
	dasmfunc_c9,
	dasmfunc_ca,
	dasmfunc_cb,
	NULL, /* nothing for cc */
	dasmfunc_cd,
	dasmfunc_ce,
	dasmfunc_cf,
	dasmfunc_d0,
	dasmfunc_d1,
	dasmfunc_d2,
	dasmfunc_d3,
	dasmfunc_d4,
	dasmfunc_d5,
	dasmfunc_d6,
	dasmfunc_d7,
	dasmfunc_d8,
	dasmfunc_d9,
	dasmfunc_da,
	dasmfunc_db,
	dasmfunc_dc,
	dasmfunc_dd,
	dasmfunc_de,
	dasmfunc_df,
	dasmfunc_e0,
	dasmfunc_e1,
	dasmfunc_e2,
	dasmfunc_e3,
	dasmfunc_e4,
	dasmfunc_e5,
	dasmfunc_e6,
	dasmfunc_e7,
	dasmfunc_e8,
	dasmfunc_e9,
	dasmfunc_ea,
	dasmfunc_eb,
	dasmfunc_ec,
	dasmfunc_ed,
	dasmfunc_ee,
	dasmfunc_ef,
	dasmfunc_f0,
	dasmfunc_f1,
	dasmfunc_f2,
	dasmfunc_f3,
	dasmfunc_f4,
	dasmfunc_f5,
	dasmfunc_f6,
	dasmfunc_f7,
	dasmfunc_f8,
	dasmfunc_f9,
	dasmfunc_fa,
	NULL, /* nothing for fb */
	NULL, /* nothing for fc */
	dasmfunc_fd,
	dasmfunc_fe,
	dasmfunc_ff};


