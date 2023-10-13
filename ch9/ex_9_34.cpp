#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> vi = {0, 1, 2, 3, 4, 5};

	auto iter = vi.begin();
	// Infinite loop, cause ++iter is from while loop, no parentheses
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}

	for (const auto &e : vi)
		cout << e << " ";
	cout << endl;

	return 0;
}
