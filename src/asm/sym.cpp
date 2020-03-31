extern "C" {
#include "asm662.h"
}
#include <map>
#include <cstring>
using namespace std;

// for case-insensitive labels, change the strcmp to strcasecmp/stricmp
struct lt_str
{
	bool operator()(const char *a, const char *b) const {
		return strcmp(a,b) < 0;
	}
};

typedef map<const char *, symbol *, lt_str> SymTab;
static SymTab _symtab;

extern "C" symbol *get_symbol(const char *name)
{
	SymTab::iterator i = _symtab.find(name);
	if(i == _symtab.end()) {
		symbol *s = new symbol;
		s->name = strdup(name);
		s->value = 0;
		s->init  = 0;
		_symtab.insert(SymTab::value_type(s->name, s));
		return s;
	}
	return (*i).second;
}

