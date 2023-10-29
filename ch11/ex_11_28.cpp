#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::map;
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {
	map<string, vector<int>> m = {{"Hello", {1, 2, 3, 4}}, {"Hi", {0, 5}}};
	map<string, vector<int>>::const_iterator iter = m.find("Hi");
	cout << iter->first << ": ";
	for (const auto &e : iter->second)
		cout << e << " ";
	cout << endl;

	return 0;
}
