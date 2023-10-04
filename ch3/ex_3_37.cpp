#include <iostream>

using std::cout;
using std::endl;

int main() {
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	int zero = ca[5];
	cout << zero << endl;
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	return 0;
}
