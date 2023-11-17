#include <iostream>

struct X {
	X() { std::cout << "X()" << std::endl; }
	X(const X&) { std::cout << "X(const X&)" << std::endl; }
	X &operator=(const X&) { std::cout << "X &operator=(const X&)" << std::endl; return *this; }
	~X() { std::cout << "~X()" << std::endl; };
};

int main() {
	X x;
	X y(x);
	X z;
	z = y;
	
	return 0;
}
