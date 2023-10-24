#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::map;

int main() {
	map<int, int> mp = {{1, 0}, {2, 0}, {3, 0}};
	for (auto iter = mp.begin(); iter != mp.end(); ++iter)
		iter->second = iter->first;

	for (const auto &e : mp)
		cout << e.first << ": " << e.second << endl;

	return 0;
}
