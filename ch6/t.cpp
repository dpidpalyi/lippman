#include <iostream>

int foo(const int &a) {
	return a;
}

int main() {
	std::cout << foo(10) << std::endl;
	return 0;
}
