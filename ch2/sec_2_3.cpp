#include <iostream>

int main() {
	int *p1 = NULL;
	std::cout << p1 << std::endl;
	if (p1)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	int i = 42, *p = &i;
	std::cout << *p << std::endl;
	return 0;
}
