#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "asm662.h"

int lineno;
static int pc;
static int finalpass;
static u8  binfile[32768];
static const char *filename;

int yywrap(void) { return 1; }
int yyerror(char *blah)
{
	fprintf(stderr, "%s line %d: %s\n", filename, lineno, blah);
	return 0;
}

void set_symbol_value(struct symbol *sym, int value)
{
	/*printf("set symbol %s := %x\n", sym->name, value); */
	sym->init  = 1;
	sym->value = value;
}

int get_symbol_value(struct symbol *sym)
{
	/* printf("get symbol %s = %x\n", sym->name, sym->value); */
	if(finalpass && !sym->init)
		emit_warning("uninitialied symbol %s used here", sym->name);
	return sym->value;
}

void set_pc(int addr) { pc = addr; /* printf("org = %x\n", pc); */ }
int  get_pc(void)     { return pc; }
void emit(const u8 *instr, int nbytes) { 
	if(finalpass) {
		/* int i;
		printf("%04x: ", pc); */

		if(pc+nbytes > 0x8000) {
			emit_error("Code exceeds 32k ROM size!");
			return;
		}
		memcpy(binfile+pc, instr, nbytes);

		/*for(i=0;i<nbytes;i++) {
			printf("%02x ", instr[i]);
		}
		printf("\n"); */
	}
	pc += nbytes; 
}

void emit_words(const unsigned short *words, int nwords)
{
	/* this is endian safe, but slow.  but who cares. */
	int i;
	for(i=0;i<nwords;i++) {
		u8 b = words[i] & 0xff;
		emit(&b, 1);
		b = words[i]>>8;
		emit(&b, 1);
	}
}

extern int yyparse(void);

void emit_warning(const char *str, ...)
{
	if(finalpass) {
		va_list ap;
		va_start(ap, str);
		fprintf(stderr, "%s line %d: warning: ", filename, lineno);
		vfprintf(stderr, str, ap);
		fprintf(stderr, "\n");
	}
}

void emit_error(const char *str, ...)
{
	if(finalpass) {
		va_list ap;
		va_start(ap, str);
		fprintf(stderr, "%s line %d: error: ", filename, lineno);
		vfprintf(stderr, str, ap);
		fprintf(stderr, "\n");
	}
}

extern FILE *yyin;
int main(int argc, char **argv)
{
	int i,npasses=2;
	FILE *fout;
	if(argc < 3) {
		printf("usage: %s infile.asm outfile.bin\n", argv[0]);
		return 0;
	}
	memset(binfile, 0xff, sizeof(binfile));
	filename = argv[1];
	yyin = fopen(filename, "rt");
	if(!yyin) {
		printf("can't open input %s\n", argv[1]);
		return -1;
	}
	for(i=1;i<=npasses;i++) {
		pc = 0;
		finalpass = i == npasses ? 1 : 0;
		lineno = 1;
		if(yyparse() != 0)
			return -1;
		rewind(yyin);
	}
	fclose(yyin);
	fout = fopen(argv[2], "wb");
	if(!fout) {
		printf("can't open output %s\n", argv[2]);
		return -1;
	}
	fwrite(binfile, 32768, 1, fout);
	fclose(fout);
	return 0;
}

