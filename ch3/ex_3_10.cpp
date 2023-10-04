#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string in;
	getline(cin, in);
	for (auto c : in)
		if (!std::ispunct(c))
			cout << c;
	cout << endl;
	return 0;
}
