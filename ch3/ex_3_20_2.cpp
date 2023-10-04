#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec;
	int n;
	while (cin >> n)
		ivec.push_back(n);
	decltype(ivec.size()) len = ivec.size();
	for (decltype(len) i = 0, j = len - 1; i <= j; ++i, --j) {
		if (i == j)
			cout << ivec[i];
		else
			cout << ivec[i] + ivec[j] << " ";
	}
	cout << endl;
		
	return 0;
}
