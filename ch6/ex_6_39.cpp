#include <iostream>

int calc(int a, int b) {
	return a * b;
}

int calc(const int a, const int b) { // error! Top-level const don't matter
	return a + b;
}

int main() {
	std::cout << calc(10, 10) << " = 100" << std::endl;
	int a = 20, b = 20;
	std::cout << calc(a, b) << " = 400" << std::endl;
	const int c = 20, d = 20;
	std::cout << calc(c, d) << " = 40" << std::endl;
	
	return 0;
}
