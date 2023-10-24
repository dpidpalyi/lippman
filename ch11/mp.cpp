#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::map;

int main() {
	map<int, int> mp = {{10, 0}, {5, 1}, {2, 2}, {3, 3}};
	for (auto it = mp.cbegin(); it != mp.cend(); ++it)
		cout << it->first << ": " << it->second << endl;

	return 0;
}
