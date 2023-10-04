#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s1, s2;
	do {
		if (cin >> s1 && cin >> s2) {
			if (s1 == s2)
				cout << "Same" << endl;
			else if (s1 < s2)
				cout << s1 << endl;
			else
				cout << s2 << endl;
		}
	} while (cin);

	return 0;
}
