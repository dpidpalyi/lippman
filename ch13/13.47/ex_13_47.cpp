#include <iostream>

#include "String.h"

int main() {
	String s;
	s.push_back('c');
	String s2(s);
	String s3;
	s3 = s;
	std::cout << *s.cbegin() << std::endl;

	return 0;
}
