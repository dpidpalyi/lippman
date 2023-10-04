#include <iostream>

using std::cout;
using std::endl;

int max(const int a, const int *p) {
	return a > *p ? a : *p;
}

int main() {
	int a = 20;
	int *p = &a;
	cout << max(10, p) << endl;
	cout << max(a + 1, &a) << endl;
	
	return 0;
}
