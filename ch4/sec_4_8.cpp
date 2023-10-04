#include <iostream>

using std::cout;
using std::endl;

int main() {
	unsigned long ul1 = 3, ul2 = 7;
	cout << (ul1 & ul2) << " = 3" << endl;
	cout << (ul1 | ul2) << " = 7" << endl;
	cout << (ul1 && ul2) << " = 1" << endl;
	cout << (ul1 || ul2) << " = 1" << endl;
	return 0;
}
