#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

int main() {
	using namespace std::placeholders;

	std::vector<int> v{1020, 1023, 1024, 1025, 1030, 1026};
	auto cnt = std::count_if(v.cbegin(), v.cend(), std::bind(std::greater<int>(), _1, 1024));
	std::cout << cnt << std::endl;

	std::vector<std::string> vs{"pooh", "Hello", "pooh", "world"};
	auto s = std::find_if(vs.cbegin(), vs.cend(), std::bind(std::not_equal_to<std::string>(), _1, "pooh"));
	std::cout << *s << std::endl;

	std::transform(v.begin(), v.end(), v.begin(), std::bind(std::multiplies<int>(), _1, 2));
	for (const auto e : v)
		std::cout << e << " ";
	std::cout << std::endl;
	return 0;
}
