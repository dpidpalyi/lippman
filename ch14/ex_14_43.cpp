#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

int main() {
	using std::placeholders::_1;
	std::vector<int> v{10, 20, 30, 40};
	auto it = std::find_if_not(v.cbegin(), v.cend(), std::bind(std::modulus<int>(), _1, 3));
	if (it != v.cend())
		std::cout << "3 is divisible by " << *it << std::endl;
	else
		std::cout << "No." << std::endl;
	return 0;
}
