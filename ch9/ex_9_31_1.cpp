#include <iostream>
#include <list>

using std::cout;
using std::endl;
using std::list;

int main() {
	list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (const auto &e : lst)
		cout << e << " ";
	cout << endl;

	auto iter = lst.begin();
	while (iter != lst.end()) {
		if (*iter % 2) {
			lst.insert(iter, *iter); // Cause iterators in list remain valid
			++iter;
			//iter += 2; // list doesn't support iterator arithmetic
		} else
			iter = lst.erase(iter);
	}

	for (const auto &e : lst)
		cout << e << " ";
	cout << endl;

	return 0;
}
