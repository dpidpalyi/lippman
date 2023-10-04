#include <iostream>
#include <stdexcept>

unsigned fact(unsigned n) {
	unsigned prev, res = 1;
	while (n > 1) {
		prev = res;
		res *= n;
		if (res / n != prev)
			throw std::overflow_error("Overflow occured!");
		--n;
	}

	return res;
}

int main() {
	unsigned n;
	while (std::cin >> n) {
		try {
			std::cout << fact(n) << std::endl;
			break;
		} catch (std::overflow_error &err) {
			std::cout << err.what()
				  << "\nWant to try again? (Enter 'y' or 'n'): ";
			char c;
			if (!(std::cin >> c) || c != 'y')
				break;
		}
	}

	return 0;
}
