#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec = {1, 2, 3};
	cout << *ivec.begin() << endl;
	cout << *++ivec.begin() << endl;
	cout << *--ivec.end() << endl;
	cout << ivec.at(10) << endl;
	cout << ivec.max_size() << endl;

	return 0;
}
