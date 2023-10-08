#include <iostream>
#include <string>
#include <vector>

int main() {
	const char *s= "Hello world";
	std::string str = s; // implicit
	std::cout << str << std::endl;

	std::vector<int> ivec(10); // explicit
	std::cout << ivec[0] << std::endl;
	return 0;
}
