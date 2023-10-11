#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool find(vector<int>::const_iterator cb, vector<int>::const_iterator ce, int n) {
	for (; cb != ce; ++cb)
		if (*cb == n)
			return true;
	return false;
}

int main() {
	vector<int> ivec;
	int buff;
	for (auto i = 0; i < 5; ++i) {
		cin >> buff;
		ivec.push_back(buff);
	}
	if (cin >> buff)
		cout << (find(ivec.begin(), ivec.end(), buff) ? "Yes" : "No") << endl;
	else
		cout << "Wrong input" << endl;

	return 0;
}
