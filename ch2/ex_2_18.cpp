#include <iostream>

int main() {
	int i = 10;
	std::cout << i << std::endl;
	int *p = nullptr;
	p = &i;
	*p = 20;
	std::cout << i << std::endl;
}
