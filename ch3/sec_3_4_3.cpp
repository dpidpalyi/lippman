#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	const string s("some string");
	string::const_iterator it = s.begin();
	for (; it != s.end(); ++it)
		cout << *it;
	cout << endl;
	return 0;
}
