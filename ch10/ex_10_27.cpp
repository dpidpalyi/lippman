#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
	vector<int> src = {1, 2, 3, 3, 4, 5, 5, 6, 7, 8};
	vector<int> dst;
	std::unique_copy(src.cbegin(), src.cend(), std::back_inserter(dst));

	for (const auto &e : dst)
		cout << e << " ";
	cout << endl;

	return 0;
}
