#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main() {
	string s("some string");
	for (auto c : s)
		cout << c << endl;
	return 0;
}
