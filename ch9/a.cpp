#include <iostream>
#include <array>

int main() {
	std::array<int, 10> arr = {1, 2, 3, 4, 5};
	for (auto e : arr)
		std::cout << e << std::endl;

	return 0;
}
