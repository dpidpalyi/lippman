#include <iostream>
#include <functional>
#include <vector>
#include <string>

template <typename I, typename T>
I find_(const I &beg, const I &end, const T &val) {
	auto it = beg;
	for (; it != end; ++it)
		if (*it == val)
			return it;
	return it;
}

int main() {
	std::vector<int> v{1, 2, 3, 4, 5};
	auto it = find_(v.begin(), v.end(), 4);
	std::cout << *it << std::endl;
	return 0;
}
