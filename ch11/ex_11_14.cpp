#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::vector;
using std::string;
using std::pair;

int main() {
	map<string, vector<pair<string, string>>> families;
	string lastName, child, birthday;
	cout << "Enter family's last name to add: ";
	while (cin >> lastName) {
		cout << "Enter child name and birtday to add: ";
		if (cin >> child >> birthday)
			families[lastName].push_back({child, birthday});
		cout << "Enter family's last name to add: ";
	}

	cout << endl;
	for (const auto &f : families) {
		cout << f.first << ": \n\t";
		for (const auto &c : f.second)
			cout << c.first << ": " << c.second << ", ";
		cout << endl;
	}

	return 0;
}
