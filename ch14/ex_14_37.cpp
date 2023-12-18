#include <iostream>
#include <vector>
#include <algorithm>

class Comparator {
	public:
		Comparator(int a) : val(a) {}
		bool operator()(int a) const { return val == a; }
	private:
		int val;
};

int main() {
	std::vector<int> v{1, 2, 3, 4, 5, 2, 1, 6, 7};
	std::replace_if(v.begin(), v.end(), Comparator(2), 10);
	for (const auto e : v)
		std::cout << e << " ";
	std::cout << std::endl;
	return 0;
}
