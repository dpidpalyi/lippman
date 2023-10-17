#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::count;
using std::string;
using std::list;

int main() {
	string needed, w;
	int n;
	cout << "Enter a word to find: ";
	if (cin >> needed) {
		list<string> ls;
		cout << "Enter words where to find: ";
		while (cin >> w)
			ls.push_back(w);

		if ((n = count(ls.cbegin(), ls.cend(), needed)))
			cout << "Number: " << needed << " occures " << n << " times." << endl;
		else
			cout << "Number: " << needed << " didn't find." << endl;
	} else
		cout << "Wrong input" << endl;

	return 0;
}
