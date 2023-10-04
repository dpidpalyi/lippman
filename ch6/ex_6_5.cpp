#include <iostream>

int mod(const int &n) {
	return n > 0 ? n : -n;
}

int main() {
	int n;
	std::cin >> n;
	std::cout << mod(n) << std::endl;
	return 0;
}
