#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <set>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::map;
using std::set;

int main() {
	using line_num = vector<string>::size_type;
	string filename;
	cout << "Enter file to search: ";
	if (cin >> filename) {
		std::ifstream input(filename);
		vector<string> v;
		map<string, set<line_num>> m;
		string line;
		line_num n = 0;
		while (getline(input, line)) {
			v.push_back(line);
			std::istringstream in(line);
			string word;
			while (in >> word) {
				m[word].insert(n);
			}
			++n;
		}
		cout << "Enter word to search: ";
		string sought;
		if (cin >> sought) {
			cout << sought << " occures " << m[sought].size() << " times" << endl;
			for (auto &num : m[sought])
				cout << "\t(line " << num + 1 << ") "
				     << v[num] << endl;
		} else {
			cout << "Wrong word input." << endl;
			return -1;
		}
	} else {
		cout << "Wrong input file." << endl;
		return -1;
	}

	return 0;
}
