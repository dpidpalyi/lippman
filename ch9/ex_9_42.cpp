#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s;
	s.reserve(100);

	char c;
	while (cin >> c)
		s.push_back(c);

	cout << s << endl;

	return 0;
}
