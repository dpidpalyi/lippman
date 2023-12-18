#include <iostream>
#include <vector>

#include "String.h"

int main() {
	std::vector<String> v1;
	std::vector<String> v2;
	v1.push_back("Hello");
	v2.push_back("Hi");
	std::cout << v1[0];
	std::cout << std::endl;
	std::cout << (v1 < v2) << std::endl;

	return 0;
}
