#include <iostream>
#include <vector>

struct X {
	X() { std::cout << "X()" << std::endl; }
	X(const X&) { std::cout << "X(const X&)" << std::endl; }
	X &operator=(const X&) { std::cout << "X &operator=(const X&)" << std::endl; return *this; }
	~X() { std::cout << "~X()" << std::endl; };
};

void f(const X &rx, X x) {
	std::vector<X> v;
	std::cout << "push to vector" << std::endl;
	v.reserve(2);
	v.push_back(rx);
	v.push_back(x);
}

int main() {
	X x;
	X y(x);
	X z;
	z = y;
	std::cout << "vector" << std::endl;
	X *px = new X;
	f(*px, *px);
	delete px;
	
	return 0;
}
