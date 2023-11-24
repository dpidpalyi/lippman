#include <iostream>

#include "String.h"

int main() {
	String s;
	s.push_back('c');
	std::cout << *s.cbegin() << std::endl;

	return 0;
}
