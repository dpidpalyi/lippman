#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec;
	int temp;
	while (cin >> temp)
		ivec.push_back(temp);
	for (auto e : ivec)
		cout << e << " ";
	cout << endl;

	for (auto &e : ivec)
		e *= (e % 2) ? 2 : 1;

	for (auto e : ivec)
		cout << e << " ";
	cout << endl;

	return 0;
}
