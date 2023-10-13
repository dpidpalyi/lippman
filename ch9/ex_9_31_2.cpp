#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;

int main() {
	forward_list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (const auto &e : lst)
		cout << e << " ";
	cout << endl;

	auto prev = lst.cbefore_begin();
	auto curr = lst.cbegin();
	while (curr != lst.cend()) {
		if (*curr % 2) {
			lst.insert_after(prev, *curr); // Cause iterator remain valid
			prev = curr;
		        ++curr;
		} else
			curr = lst.erase_after(prev);
	}

	for (const auto &e : lst)
		cout << e << " ";
	cout << endl;

	return 0;
}
