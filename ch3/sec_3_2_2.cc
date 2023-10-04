#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	string s1;
	string s2; 
	cin >> s1 >> s2;
	cout << s1 << " " << s2 << endl;
	s1 = s2;
	cout << s1 << " " << s2 << endl;
	return 0;
}
