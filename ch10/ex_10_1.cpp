#include <iostream>
<<<<<<< HEAD
#include <algorithm>
#include <vector>
=======
#include <vector>
#include <algorithm>
>>>>>>> 1ee8d1f4c9b3efd43214db71249b379ffcee604b

using std::cin;
using std::cout;
using std::endl;
using std::vector;
<<<<<<< HEAD

int main() {
	vector<int> vi;
	int needed, n;
	cout << "Enter a number to count: ";
	cin >> needed;
	cout << "Enter numbers where to count: ";
	while (cin >> n)
		vi.push_back(n);

	cout << "Number: " << needed << " occurs: " <<std::count(vi.cbegin(), vi.cend(), needed) << endl;
=======
using std::count;

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
>>>>>>> 1ee8d1f4c9b3efd43214db71249b379ffcee604b

	return 0;
}
