#include <memory>

using std::make_shared;
using std::shared_ptr;

void process(shared_ptr<int> ptr) {
	*ptr = 10;
}

int main() {
	auto p = new int();
	auto sp = make_shared<int>();
	
	// (a) legal, in process shared counter increase to 2, then decrease to 1;
	process(sp); 

	// (b) illegal, need explicit constructor
	//process(new int());
	
	// (c) illegal, need explicit constructor
	//process(p);
	
	// (d) illegal, dangling pointer
	// process(shared_ptr<int>(p)); 
	return 0;
}
