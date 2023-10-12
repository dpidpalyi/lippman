#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> iv{1, 4, 3, 4, 5, 6, 7, 8, 9, 10};

	// This needed, because after insert all iterators potentially changes.
	// So at every step it needed to calc mid.
	vector<int>::iterator mid = iv.begin() + iv.size() / 2;
	for (auto iter = iv.begin(); iter != mid; ++iter) {
		if (*iter == 4) {
			++(iter = iv.insert(iter, *iter * 100));
			mid = iv.begin() + iv.size() / 2;
		}
	}

	for (const auto &e : iv) cout << e << " ";
	cout << endl;

	return 0;
}
