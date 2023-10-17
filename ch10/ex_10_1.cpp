#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> vi;
	int needed, n;
	cout << "Enter a number to count: ";
	cin >> needed;
	cout << "Enter numbers where to count: ";
	while (cin >> n)
		vi.push_back(n);

	cout << "Number: " << needed << " occurs: " <<std::count(vi.cbegin(), vi.cend(), needed) << endl;

	return 0;
}
