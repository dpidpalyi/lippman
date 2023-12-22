#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <functional>

template <typename T>
int compare(const T &v1, const T &v2) {
	if (std::less()(v1, v2)) return -1;
	if (std::less()(v2, v1)) return 1;
	return 0;
}

template <unsigned N, unsigned M>
int compare(const char (&p1)[N], const char (&p2)[M]) {
	return std::strcmp(p1, p2);
}

int main() {
	std::cout << compare(2, 3) << std::endl;

	std::vector<double> v1{0.2, 0.3};
	std::vector<double> v2{0.2, 0.2};
	std::cout << compare(v1, v2) << std::endl;

	std::string s1 = "hello";
	std::string s2(s1);
	std::cout << compare(s1, s2) << std::endl;

	std::cout << compare("hello", "world!") << std::endl;

	return 0;
}
