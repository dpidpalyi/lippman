#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string word;
	while (getline(cin, word))
		if (!word.empty())
			cout << word << endl;
	return 0;
}
