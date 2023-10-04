#include "d.h"

int foo(int a) {
	return a;
}

int main() {
	std::cout << foo(20) << std::endl;
	std::cout << foo() << std::endl;

	return 0;
}
