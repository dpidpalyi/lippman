#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (auto curr = vi.crbegin(), first = vi.crend(); curr != first; ++curr)
		cout << *curr << " ";
	cout << endl;

	return 0;
}
