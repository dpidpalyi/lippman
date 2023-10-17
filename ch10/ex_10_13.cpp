#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::partition;

bool moreFive(const string &s) {
	return s.size() > 4;
}

int main() {
	vector<string> vs;
	string w;
	while (cin >> w)
		vs.push_back(w);

	auto parted_it = partition(vs.begin(), vs.end(), moreFive);
	vs.erase(parted_it, vs.end());

	for (const auto &w : vs)
		cout << w << " ";
	cout << endl;

	return 0;
}
