#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec1 = {1, 2, 3, 4, 5};
	vector<int> ivec2 = {1, 2, 3, 4, 6};
	vector<int> ivec3 = {1, 2, 3, 4, 5};
	cout << (ivec1 == ivec2 ? "YES" : "NO") << endl;
	cout << (ivec1 == ivec3 ? "YES" : "NO") << endl;

	return 0;
}
