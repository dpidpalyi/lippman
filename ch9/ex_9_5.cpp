#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int>::const_iterator find(vector<int>::const_iterator cb, vector<int>::const_iterator ce, int n) {
	for (; cb != ce; ++cb)
		if (*cb == n)
			return cb;
	return ce;
}

vector<int>::iterator find(vector<int>::iterator b, vector<int>::iterator e, int n) {
	for (; b != e; ++b)
		if (*b == n)
			return b;
	return e;
}

int main() {
	vector<int> ivec;
	int buff;
	for (auto i = 0; i < 5; ++i) {
		cin >> buff;
		ivec.push_back(buff);
	}
	if (cin >> buff) {
		auto it = find(ivec.cbegin(), ivec.cend(), buff);
		if (it != ivec.end())
			cout << *it << endl;
		else
			cout << "No element found." << endl;
	} else
		cout << "Wrong input" << endl;

	return 0;
}
