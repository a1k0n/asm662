extern "C" {
#include "dasm.h"
}
#include "dasmq.h"
#include "dasmout.h"

static dasm_state *_D;
static DASMQueue *_dqueue;
static DASMOutput *_dout;
static unsigned tbladdr_lo=0x5600,tbladdr_hi=0x7ff0;
extern "C" const char *get_rom_label(unsigned addr)
{
	static char lbuf[64];
	const char *l = _dout->get_label(addr);
	if(l) {
		_dqueue->add(addr, _D->pc, l, _D->dd, _D->lrb);
		return l;
	}
	sprintf(lbuf, "label_%04x", addr);
	_dqueue->add(addr, _D->pc, lbuf, _D->dd, _D->lrb);
	_dout->add_label(addr, lbuf);
	return lbuf;
}

extern "C" const char *get_romtable_label(unsigned addr)
{
	static char lbuf[64];
	const char *l = _dout->get_label(addr);
	if(l) return l;
	if(addr >= tbladdr_lo && addr < tbladdr_hi) {
		sprintf(lbuf, "tbl_%04x", addr);
		_dout->add_label(addr, lbuf);
		return lbuf;
	}
	sprintf(lbuf, "0%04xh", addr);
	return lbuf;
}

static map<unsigned, const char *> _SFRs;
extern "C" const char *get_ram_label(unsigned addr, int digits)
{
	static char lbuf1[64], lbuf2[64];
	static char *lbuf=lbuf2;
	lbuf = (lbuf == lbuf1) ? lbuf2 : lbuf1;
	map<unsigned, const char *>::iterator i =
		_SFRs.find(addr);
	if(i != _SFRs.end())
		return (*i).second;
	sprintf(lbuf, "0%0*xh", digits, addr);
	return lbuf;
}

const unsigned vcal_base=0x28;
extern "C" void do_vcal(unsigned n)
{
	unsigned addr = _D->rom[vcal_base+n*2]|(_D->rom[vcal_base+n*2+1]<<8);
	get_rom_label(addr);
}

void dasm(dasm_state *D, DASMQueue *dqueue, DASMOutput *out)
{
	dasmfunc f;
	int d,i=0;
	char linebuf[1024];
	char lrb[12];

	_D = D;
	_dqueue = dqueue;
	_dout = out;
	while(!dqueue->empty()) {
		D->pc = dqueue->front().addr;
		D->dd = dqueue->front().dd;
		D->lrb = dqueue->front().lrb;
		{
			unsigned f = dqueue->front().from;
			if(f == 0xffff) {
				sprintf(linebuf, "%-30s ; %04X called by user", 
						"", D->pc);
			} else {
				if(D->lrb == 0xffff)
					strcpy(lrb, "P??,B??");
				else
					sprintf(lrb, "P%02X,B%02X", 
							D->lrb>>5, (D->lrb&0x1f)<<3);
				sprintf(linebuf, "%-30s ; %04X from %04X "
						"(DD%d,%s)", "", D->pc, f, D->dd, lrb);
			}
			out->add_ref(D->pc, linebuf);
		}
		dqueue->pop_front();

		while(!D->mask[D->pc] && D->pc < 0x8000) {
			char buf[256];
			int i;
			unsigned pc = D->pc; // keep old PC value
			f = dasmtable[D->rom[pc]];
			if(!f) {
				sprintf(linebuf, "; opcode %02x invalid @%04X; halting", 
						D->rom[pc], pc);
				out->add_warn(pc, linebuf);
				break;
			}
			d = f(D, buf);
			if(d == -1) {
				D->dd^=1;
				if((d=f(D, buf)) == -1) {
					sprintf(linebuf, "; invalid opcode encountered @%04X;"
							" halting", pc);
					out->add_warn(pc, linebuf);
					break;
				} else {
					out->add_warn(pc, "; warning: had to flip DD");
				}
			}
			if(D->lrb == 0xffff)
				strcpy(lrb, "?? ??");
			else
				sprintf(lrb, "%02X %02X", D->lrb>>5, (D->lrb&0x1f)<<3);

			sprintf(linebuf, "%-30s ; %04X %d %s ", buf, pc, 
					D->dd, lrb);
			for(i=0;i<d;i++) {
				sprintf(buf, "%02X", D->rom[pc+i]);
				strcat(linebuf, buf);
			}
			out->add_line(pc, linebuf);
			for(i=0;i<d;i++) D->mask[pc+i] = 1;
		}
	}
}

void init_66207(dasm_state *D, DASMQueue *q, DASMOutput *out)
{
	int i=0;
#define makeentry(x) { \
			unsigned a = (D->rom[i+1]<<8) | D->rom[i];\
			if(a < 0x8000) { q->add(a, i, x, 0, 0xffff); \
			out->add_label(a, x); } out->add_label(i, x"_vec"); i+=2; }
	makeentry("int_start");
	makeentry("int_break");
	makeentry("int_WDT");
	makeentry("int_NMI");
	makeentry("int_INT0");
	makeentry("int_serial_rx");
	makeentry("int_serial_tx");
	makeentry("int_serial_rx_BRG");
	makeentry("int_timer_0_overflow");
	makeentry("int_timer_0");
	makeentry("int_timer_1_overflow");
	makeentry("int_timer_1");
	makeentry("int_timer_2_overflow");
	makeentry("int_timer_2");
	makeentry("int_timer_3_overflow");
	makeentry("int_timer_3");
	makeentry("int_a2d_finished");
	makeentry("int_PWM_timer");
	makeentry("int_serial_tx_BRG");
	makeentry("int_INT1");
#undef makeentry
#define makeentry(x) { \
			unsigned a = (D->rom[i+1]<<8) | D->rom[i];\
			if(a < 0x8000) { out->add_label(a, x); } \
			out->add_label(i, x"_vec"); i+=2; }
	makeentry("vcal_0");
	makeentry("vcal_1");
	makeentry("vcal_2");
	makeentry("vcal_3");
	makeentry("vcal_4");
	makeentry("vcal_5");
	makeentry("vcal_6");
	makeentry("vcal_7");
#undef makeentry

#define makesfr(name) _SFRs.insert(pair<unsigned,const char*>(i++,name))
#include "../66207_regs.h"
#undef makesfr

	out->add_label(0x38, "code_start");
	out->add_ref(0, "org 0000h");
}

int main(int argc, char **argv)
{
	dasm_state ds;
	DASMOutput dout;
	DASMQueue  dq;
	FILE *fp;

	if(argc < 3) {
		printf("usage: %s <binfile> <outfile> [addr...]\n", argv[0]);
		return 0;
	}

	fp = fopen(argv[1], "rb");
	if(!fp) {
		printf("unable to open %s\n", argv[1]);
		return -1;
	}
	fread(ds.rom, 32768, 1, fp);
	fclose(fp);

	if(!strcmp(argv[2], "-")) {
		fp = stdout;
	} else {
		fp = fopen(argv[2], "wt");
		if(!fp) {
			printf("unable to write %s\n", argv[2]);
			return -1;
		}
	}

	// init 66207 entry vectors
	init_66207(&ds, &dq, &dout);
	// mask all ROM as unseen data
	memset(ds.mask, 0, sizeof(ds.mask));

	// add user entry points
	for(int i=3;i<argc;i++) {
		unsigned addr;
		sscanf(argv[i], "%x", &addr);
		dq.add(addr, 0xffff, string("user_")+argv[i], 0, 0xffff);
	}

	// perform disassembly
	dasm(&ds, &dq, &dout);

	// note: at this point, we can add more entry points and incrementally
	// call dasm(), marking more blocks of code each time.  i.e. for an
	// interactive disassembler.  dump can of course be called after each
	// step to display the results.

	// write our output to fp
	dout.dump(fp, &ds);

	fclose(fp);

	return 0;
}

