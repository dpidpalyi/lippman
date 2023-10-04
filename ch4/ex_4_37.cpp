#include <iostream>
#include <string>

using std::string;

int main() {
	int i;
	char t = 'A';
	double d = 3.14;
	string s = {"Hello world"};
	const string *ps = &s;
	char *pc = &t;
	void *pv;
	//pv = static_cast<void*>(const_cast<string*>(ps));
	pv = const_cast<string*>(ps);
	std::cout << ps << std::endl;
	std::cout << pv << std::endl;
	i = static_cast<int>(*pc);
	std::cout << *pc << std::endl;
	std::cout << i << std::endl;
	pv = static_cast<void*>(&d);
	std::cout << &d << std::endl;
	std::cout << pv << std::endl;
	pc = static_cast<char *>(pv);
	std::cout << pv << std::endl;
	std::cout << pc << std::endl;
	return 0;
}
