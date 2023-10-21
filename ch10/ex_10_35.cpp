#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (auto curr = vi.cend(), first = vi.cbegin(); curr != first;)
		cout << *--curr << " ";
	cout << endl;

	return 0;
}
