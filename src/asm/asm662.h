typedef unsigned char u8;

struct symbol
{
	const char *name;
	int value;
	int init;
};

extern int lineno;

/* get existing symbol or construct a new one */
extern struct symbol *get_symbol(const char *name);
extern void set_symbol_value(struct symbol *sym, int value);
extern int  get_symbol_value(struct symbol *sym);

/* set and get the program counter */
extern void set_pc(int addr);
extern int  get_pc(void);

/* emit an instruction at the current PC and increment PC by nbytes */
/* note: does nothing but increment PC unless this is the final pass of
 * assembly */
extern void emit(const u8 *instr, int nbytes);
extern void emit_words(const unsigned short *words, int nwords);

extern void emit_warning(const char *str, ...);
extern void emit_error(const char *str, ...);

