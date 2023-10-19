#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using std::cout;
using std::endl;
using std::vector;
using std::deque;

int main() {
	vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int> bv;
	deque<int> fd;
	deque<int> iv;
	std::copy(vi.cbegin(), vi.cend(), std::inserter(iv, iv.end()));
	std::copy(vi.cbegin(), vi.cend(), std::back_inserter(bv));
	std::copy(vi.cbegin(), vi.cend(), std::front_inserter(fd));

	for (const auto &e : iv)
		cout << e << " ";
	cout << endl;

	for (const auto &e : bv)
		cout << e << " ";
	cout << endl;

	for (const auto &e : fd)
		cout << e << " ";
	cout << endl;

	return 0;
}
