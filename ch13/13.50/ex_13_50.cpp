#include <iostream>
#include <vector>

#include "String.h"

int main() {
	std::vector<String> v;
	v.push_back("Hello");
	v.push_back("Hi");
	v.push_back(String("World"));

	return 0;
}
