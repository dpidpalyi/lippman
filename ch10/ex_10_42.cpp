#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::list;
using std::string;
using std::sort;
using std::unique;
using std::stable_sort;

bool isShorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

void elimDups(list<string> &lst) {
	lst.sort();
	lst.unique();

	for (const auto &w : lst)
		cout << w << " ";
	cout << endl;
}

int main() {
	list<string> vs;
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
