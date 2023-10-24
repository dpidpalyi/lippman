#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::multimap;
using std::string;

int main() {
	multimap<string, string> families;
	string lastName;
	cout << "Enter family's last name to add: ";
	while (cin >> lastName) {
		cout << "Enter child name to add: ";
		string child;
		if (cin >> child)
			families.emplace(lastName, child);
		cout << "Enter family's last name to add: ";
	}

	cout << endl;
	for (const auto &f : families)
		cout << f.first << ": " << f.second << endl;

	return 0;
}
