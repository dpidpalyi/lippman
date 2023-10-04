#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	int a, b;
	if (cin >> a >> b) {
		cout << "Before swap a = " << a << ", b = " << b << endl;
		swap(a, b);
		cout << "After swap a = " << a << ", b = " << b << endl;
	} else
		cout << "Wrong input!" << endl;

	return 0;
}
