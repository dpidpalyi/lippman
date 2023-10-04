#include <iostream>

int main() {
	int a = 10;
	const int *const pa = &a;
	std::cout << *pa << std::endl;
	return 0;
}

