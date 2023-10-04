#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

char &get_val(string &str, string::size_type ix) {
	return str[ix];
}

int main() {
	string s("hello world!");
	cout << s << endl;
	get_val(s, 0) = 'H';
	cout << s << endl;

	return 0;
}
