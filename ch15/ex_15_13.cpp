#include <iostream>
#include <string>

class base {
	public:
		std::string name() { return basename; }
		virtual void print(std::ostream &os) { os << basename; }
	private:
		std::string basename = "base";
};

class derived : public base {
	public:
		void print(std::ostream &os) { base::print(os); os << " " << i; }
	private:
		int i = 0;
};

int main() {
	base bobj;
	base *bp1 = &bobj;
	base &br1 = bobj;
	derived dobj;
	base *bp2 = &dobj;
	base &br2 = dobj;
	bobj.print(std::cout);	// compile, cause object call
	std::cout << std::endl;
	dobj.print(std::cout);	// compile, cause object call
	std::cout << std::endl;
	bp1->name(); 	// compile, cause name() is not virtual
	bp2->name(); 	// compile, cause name() is not virtual
	br1.print(std::cout);	// run-time, cause reference
	std::cout << std::endl;
	br2.print(std::cout);	// run-time, cause reference
	std::cout << std::endl;
}
