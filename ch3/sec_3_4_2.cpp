#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s("some string");
	for (auto it = s.begin(); it != s.end(); ++it)
		*it = std::toupper(*it);
	for (auto c : s)
		cout << c;
	cout << endl;
	return 0;
}
