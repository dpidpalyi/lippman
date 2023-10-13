#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (const auto &e : vi)
		cout << e << " ";
	cout << endl;

	auto iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2) {
			// UB here, cause we don't know when arguments evaluate.
			// Standard [5.2.2] :
                        // "The order of evaluation of arguments is unspecified."
			// iter = vi.insert(iter, *iter++);

			iter = vi.insert(iter, *iter);
			iter += 2;
		} else
			iter = vi.erase(iter);
	}

	for (const auto &e : vi)
		cout << e << " ";
	cout << endl;

	return 0;
}
