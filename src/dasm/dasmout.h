#include <map>
#include <set>
#include <string>
using namespace std;

class DASMOutput
{
public:
	// note: only one label per address.
	// everything else can have multiple lines per address.
	void add_label(unsigned addr, const string &labelline);
	const char *get_label(unsigned addr);
	unsigned get_next(unsigned addr);
	void add_ref(unsigned addr, const string &line);
	void add_warn(unsigned addr, const string &line);
	void add_line(unsigned addr, const string &line);
	void dump(FILE *out, dasm_state *D);
	bool ignore(unsigned addr);
	void add_ignore(unsigned addr);
private:
	multimap<unsigned,string> lines;
	set<unsigned> ignore_set;
};


