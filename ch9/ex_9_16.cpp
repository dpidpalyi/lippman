#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main() {
	list<int> ili = {1, 2, 3, 4, 5};
	vector<int> ivec1 = {1, 2, 3, 4, 5};
	vector<int> ivec2 = {1, 2, 3, 4, 6};
	cout << (vector<int>(ili.cbegin(), ili.cend()) == ivec1 ? "YES" : "NO") << endl;
	cout << (vector<int>(ili.cbegin(), ili.cend()) == ivec2 ? "YES" : "NO") << endl;

	return 0;
}
