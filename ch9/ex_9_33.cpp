#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> v = {1, 2, 3, 4, 5};
	auto begin = v.begin();

	while (begin != v.end()) {
		cout << *begin << " ";
		++begin;
		// ++begin may be invalid after insertion.
		// that's why we need to refresh begin iterator.
		v.insert(begin, 100);
		//begin = v.insert(begin, 100);
		
		// Invalid pointer here
		++begin;
	}
	cout << endl;

	for (const auto &e : v)
		cout << e << " ";
	cout << endl;

	return 0;
}
