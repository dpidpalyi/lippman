#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	auto len1 = s1.size(), len2 = s2.size();
	if (len1 == len2)
		cout << "The length of the strings is equal" << endl;
	else if (len1 > len2)
		cout << "The string " << s1 << " is larger!" << endl;
	else
		cout << "The string " << s2 << " is larger!" << endl;
	return 0;
}
