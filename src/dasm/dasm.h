#include <stdlib.h>
#include <stdio.h>

typedef struct {
	unsigned char rom[32768];
	char mask[32768];         /* mask[addr]=0 means data, 1 means code. */
	int dd;
	unsigned pc;
} dasm_state;

typedef int (*dasmfunc)(dasm_state *, char *buf);

extern dasmfunc dasmtable[];
extern const char *get_label(unsigned addr);

