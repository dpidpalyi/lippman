#include <iostream>

#include "String.h"

int main() {
	String s;
	s.push_back('a');
	s.push_back('b');
	s.push_back(' ');
	s.push_back('c');
	s.push_back('.');
	std::cout << s << std::endl;

	return 0;
}
