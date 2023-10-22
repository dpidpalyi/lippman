#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::vector;
using std::string;

int main() {
	map<string, vector<string>> families;
	string lastName;
	cout << "Enter family's last name to add: ";
	while (cin >> lastName) {
		cout << "Enter child name to add: ";
		string child;
		if (cin >> child)
			families[lastName].push_back(child);
		cout << "Enter family's last name to add: ";
	}

	cout << endl;
	for (const auto &f : families) {
		cout << f.first << ": ";
		for (const auto &c : f.second)
			cout << c << " ";
		cout << endl;
	}

	return 0;
}
