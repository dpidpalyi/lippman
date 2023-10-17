#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::unique;
using std::stable_sort;

bool isShorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

void elimDups(vector<string> &vs) {
	sort(vs.begin(), vs.end());
	auto end_unique = unique(vs.begin(), vs.end());

	for (const auto &w : vs)
		cout << w << " ";
	cout << endl;

	vs.erase(end_unique, vs.end());
}

int main() {
	vector<string> vs;
	string w;
	while (cin >> w)
		vs.push_back(w);

	elimDups(vs);
	for (const auto &w : vs)
		cout << w << " ";
	cout << endl;

	// Added stable sort
	stable_sort(vs.begin(), vs.end(), isShorter);

	for (const auto &w : vs)
		cout << w << " ";
	cout << endl;
}
