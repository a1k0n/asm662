// this is a mighty hackjob.  i mean, damn.  just ignore the
// implementation. :)

extern "C" {
#include "dasm.h"
}
#include "dasmout.h"
#include <cstring>

void DASMOutput::add_label(unsigned addr, const string &l) 
{
	if(lines.find(addr*4+1) == lines.end())
		lines.insert(pair<unsigned,string>(addr*4+1,l));
}

const char *DASMOutput::get_label(unsigned addr)
{
	multimap<unsigned,string>::iterator i;
	i = lines.find(addr*4+1);
	if(i == lines.end())
		return NULL;
	return (*i).second.c_str();
}

unsigned DASMOutput::get_next(unsigned addr)
{
	multimap<unsigned,string>::iterator i;
	i = lines.find(addr*4+1);
	if(i == lines.end()) return 0xffff;
	++i;
	if(i == lines.end()) return 0xffff;
	return (*i).first/4;
}

void DASMOutput::add_ref(unsigned addr, const string &l) 
{
	lines.insert(pair<unsigned,string>(addr*4,l));
}

void DASMOutput::add_warn(unsigned addr, const string &l) 
{
	lines.insert(pair<unsigned,string>(addr*4+2,l));
}

void DASMOutput::add_line(unsigned addr, const string &l) 
{
	lines.insert(pair<unsigned,string>(addr*4+3,l));
}

bool DASMOutput::ignore(unsigned addr)
{
	return ignore_set.count(addr) == 1 ? true : false;
}

void DASMOutput::add_ignore(unsigned addr)
{
	ignore_set.insert(addr);
}

static int output_unmasked_data(FILE *out, DASMOutput *dout, dasm_state *D,
		unsigned a, unsigned z, const char *label)
{
	int started_line=-1;
	int linelen = 8, linepos = 0;
	unsigned i;
	char ihateC[64];
	int skipped_data = 0;
	ihateC[0] = 0;
	while(D->mask[a] && a<z) { a++; skipped_data++; }
	if(skipped_data && label) {
		// we have a problem here.  solve it by emitting an relative-PC equate
		fprintf(out, "%-15s EQU     $-%d ; %04X\n", label, skipped_data, a-skipped_data);
		label = NULL;
	}
	if(label) {
		strcpy(ihateC, label);
		strcat(ihateC, ":");
		/* space-fill labels to 25 to make the vector table look good */
		for(i=strlen(ihateC);i<25;i++) ihateC[i]=' ';
		ihateC[i]=0;
	}
	if(!D->mask[a] && (D->mask[a+2] || (a+2 == z)) && !D->mask[a+1] &&
			dout->get_label(a+1)==NULL) {
		// special case: only two bytes
		unsigned addr = (D->rom[a+1]<<8)|D->rom[a];
		const char *l = dout->get_label(addr);
		if(addr > 0x38 && l)
			fprintf(out, "%-15s DW  %-17s; %04X %02X%02X\n", ihateC, l, a,
					D->rom[a], D->rom[a+1]);
		else
			fprintf(out, "%-15s DW  0%04xh%11s; %04X\n", ihateC, addr, "", a);
		return z;
	}
	for(;a<z;a++) {
		if(D->mask[a]) break;
		const char *l = dout->get_label(a);
		if(l) {
			unsigned next = dout->get_next(a);
			unsigned len = next-a;
			//fprintf(out, "; table size %d\n", len);
			if(len > 8 && len%10 == 0)
				linelen = 10;
			strcpy(ihateC, l);
			strcat(ihateC, ":");
			started_line = -1;
		}
		if(started_line != -1) {
			++linepos;
			if(linepos == linelen) {
				fprintf(out, ",0%02Xh ; %04X\n", D->rom[a], started_line);
				started_line = -1;
			} else {
				fprintf(out, ",0%02Xh", D->rom[a]);
			}
		} else {
			linepos = 1;
			fprintf(out, "%-15s DB  ", ihateC);
			fprintf(out, "0%02Xh", D->rom[a]);
			started_line = a;
			ihateC[0] = 0;
		}
	}
	if(started_line != -1) {
		fprintf(out, " ; %04X\n", started_line);
	}
	return z;
}

void DASMOutput::dump(FILE *out, dasm_state *D) 
{
	unsigned a=0, addr=0, newaddr;
	const char *lab=NULL;
	multimap<unsigned,string>::iterator i;
	for(i=lines.begin();i!=lines.end();i++) {
		newaddr = (*i).first/4;
		a = output_unmasked_data(out, this, D, a, newaddr, lab);
		if(newaddr != addr)
			lab = NULL;
		addr = newaddr;
		if(((*i).first&3) == 1) {
			lab = (*i).second.c_str();
		} else {
			string blargh;
			if(lab) blargh = string(lab)+":";
			fprintf(out, "%-15s %s\n", blargh.c_str(), (*i).second.c_str());
			lab = NULL;
		}
	}
	addr=0x7fff;
	while((addr >= a) && (D->rom[addr] == 0xff)) addr--;
	output_unmasked_data(out, this, D, a, addr+1, NULL);
}

