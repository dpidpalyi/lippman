#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string res;
	string curr;
	while (getline(cin, curr))
		res += curr + " ";
	cout << res << endl;
	return 0;
}
