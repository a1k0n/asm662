#include <deque>
#include <string>
using namespace std;

struct dstate {
	unsigned addr;
	unsigned from;
	string name;
	unsigned dd, lrb, usp;
	dstate() {}
	dstate(unsigned a, unsigned f, const string &n, 
			unsigned d, unsigned _lrb, unsigned _usp) 
		{ addr=a; from=f; name=n; dd=d; lrb=_lrb, usp=_usp; }
};

class DASMQueue
{
public:
	void add(unsigned addr, unsigned from, const string &name, 
			unsigned dd, unsigned lrb, unsigned usp) {
		_dq.push_back(dstate(addr, from, name, dd, lrb, usp));
	}
	dstate &front() { return _dq.front(); }
	void pop_front() { _dq.pop_front(); }
	bool empty() { return _dq.empty(); }
private:
	deque<dstate> _dq;
};

