#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	vector<int> v;
	for (int i = 0; i != 100; ++i) {
		v.push_back(i);
		cout << v[i] << " ";
	}
	cout << endl;
	vector<string> s;
	string word;
	while (cin >> word)
		s.push_back(word);
	cout << endl;
	return 0;
}

