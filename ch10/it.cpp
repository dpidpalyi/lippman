#include <iostream>
#include <iterator>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::back_inserter;

int main() {
	vector<int> vi;
	int n;
	for (auto it = back_inserter(vi); cin >> n;)
		it = n;

	for (const auto &e : vi)
		cout << e << " ";
	cout << endl;

	return 0;
}
