#include <iostream>
#include <string>

template <typename T, std::size_t N>
constexpr std::size_t size_(T (&)[N]) {
	return N;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	char c[] = "s";
	std::string s[] = {"hello", "world!"};
	std::cout << size_(arr) << std::endl;
	std::cout << size_(s) << std::endl;
	std::cout << size_(c) << std::endl;
	return 0;
}
