#include <iostream>

const int buf = 512;

void foo();

int main() {
	std::cout << buf << std::endl;
	foo();
	return 0;
}
