#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main() {
	string s("he\tllo world!!!");
	for (decltype(s.size()) index = 0; index != s.size() && !std::isspace(s[index]); ++index)
		s[index] = std::toupper(s[index]);
	cout << s << endl;
	return 0;
}
