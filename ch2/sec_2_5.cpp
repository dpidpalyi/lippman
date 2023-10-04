#include <iostream>

int main() {
	auto i = 0, *p = &i;
	auto d = 0., pi = 3.14;
	std::cout << i << *p << d << pi << std::endl;
	return 0;
}
