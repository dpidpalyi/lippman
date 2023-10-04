#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec1(10, 42);
	vector<int> ivec2;
	for (int i = 0; i < 10; ++i)
		ivec2.push_back(42);
	vector<int> ivec3 = vector<int>(10, 42);
	return 0;
}
