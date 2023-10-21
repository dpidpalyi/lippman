#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main() {
	vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	list<int> li(vi.crbegin() + 3, vi.crbegin() + 8);

	for (const auto &e : li)
		cout << e << " ";
	cout << endl;

	return 0;
}
