#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec = {1, 2, 3};
	cout << *ivec.begin() << endl;
	cout << *++ivec.begin() << endl;
	ivec.assign({"", ""});
	cout << *ivec.begin() << endl;

	return 0;
}
