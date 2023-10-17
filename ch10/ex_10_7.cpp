#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;

int main() {
	vector<int> vec;
	list<int> lst;
	int i;
	while (cin >> i)
		lst.push_back(i);
	//copy(lst.cbegin(), lst.cend(), vec.begin()); // We can't copy to empty vec
	copy(lst.cbegin(), lst.cend(), std::back_inserter(vec));

	for (auto &e : vec)
		cout << e << " ";
	cout << endl;

	vector<int> v;
	//v.reserve(10);
	v.resize(10);
	// reserve doesn't change the size of vec, but resize does
	fill_n(v.begin(), 10, 0);

	for (auto &e : v)
		cout << e << " ";
	cout << endl;

	return 0;
}
