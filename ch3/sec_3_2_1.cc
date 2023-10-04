#include <iostream>
#include <string>
using std::cout; using std::endl;
using std::string;

int main() {
	string s1;
	string s2 = s1;
	string s3 = "hiya";
	string s4(10, 'c');
	string s6("hiya");
	string s8 = string(10, 'c');
	string s9(s3);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s6 << endl;
	cout << s8 << endl;
	cout << s9 << endl;
	return 0;
}
