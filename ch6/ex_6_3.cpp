#include <iostream>
#include <stdexcept>

unsigned long long fact(int n) {
	unsigned long long res = 1, prev;
	while (n > 1) {
		prev = res;
		res *= n;
		if (res / n != prev)
			throw std::overflow_error("Overflow!");
		--n;
	}

	return res;
}

int main() {
	int n;
	std::cin >> n;
	std::cout << fact(n) << std::endl;

	return 0;
}
