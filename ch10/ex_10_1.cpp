#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	int needed, n;
	cout << "Enter a number to find: ";
	if (cin >> needed) {
		vector<int> vi;
		cout << "Enter numbers where to find: ";
		while (cin >> n)
			vi.push_back(n);

		if ((n = count(vi.cbegin(), vi.cend(), needed)))
			cout << "Number: " << needed << " occures " << n << " times." << endl;
		else
			cout << "Number: " << needed << " didn't find." << endl;
	} else
		cout << "Wrong input" << endl;

	return 0;
}
