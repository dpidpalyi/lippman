#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec;
	for (int i = 0; i < 24; ++i)
		ivec.push_back(i);
	cout << "size = " << ivec.size();
	cout << ", capacity = " << ivec.capacity() << endl;
	ivec.reserve(50);
	while (ivec.size() != ivec.capacity())
		ivec.push_back(0);
	cout << "size = " << ivec.size();
	cout << ", capacity = " << ivec.capacity() << endl;
	ivec.push_back(51);
	cout << "size = " << ivec.size();
	cout << ", capacity = " << ivec.capacity() << endl;
	ivec.shrink_to_fit();
	cout << "size = " << ivec.size();
	cout << ", capacity = " << ivec.capacity() << endl;

	return 0;
}
