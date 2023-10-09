#include <iostream>

std::istream &foo(std::istream &is) {
	char c;
	while (is >> c)
		std::cout << c;
	is.clear();

	return is;
}

int main() {
	std::istream &is = foo(std::cin);
	std::cout << std::endl << is.rdstate() << std::endl;

	return 0;
}
