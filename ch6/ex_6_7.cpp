#include <iostream>

size_t count_calls() {
	static size_t cnt;
	return cnt++;
}

int main() {
	for (size_t i = 0; i != 10; ++i)
		std::cout << count_calls() << std::endl;
	return 0;
}
