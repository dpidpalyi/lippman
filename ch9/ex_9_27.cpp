#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;

int main() {
	forward_list<int> lst{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	auto prev = lst.cbefore_begin();
	auto curr = lst.cbegin();
	
	cout << "Init list: ";
	for (const auto &e : lst) cout << e << " ";
	cout << endl;

	while (curr != lst.cend()) {
		if (*curr % 2)
			curr = lst.erase_after(prev);
		else {
			prev = curr;
			++curr;
		}
	}

	cout << "Modifiend list: ";
	for (const auto &e : lst) cout << e << " ";
	cout << endl;

	return 0;
}
