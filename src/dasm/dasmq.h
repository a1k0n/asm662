#include <deque>
#include <string>
using namespace std;

struct dstate {
	unsigned addr;
	unsigned from;
	string name;
	int dd;
	dstate() {}
	dstate(unsigned a, unsigned f, const string &n, int d) 
		{ addr=a; from=f; name=n; dd=d; }
};

class DASMQueue
{
public:
	void add(unsigned addr, unsigned from, const string &name, int dd) {
		_dq.push_back(dstate(addr, from, name, dd));
	}
	dstate &front() { return _dq.front(); }
	void pop_front() { _dq.pop_front(); }
	bool empty() { return _dq.empty(); }
private:
	deque<dstate> _dq;
};

