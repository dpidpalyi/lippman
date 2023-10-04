#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int dv(int a, int b) {
	return a / b;
}

typedef decltype(add) *pf;

int main() {
	vector<pf> fvec = {add, sub, mul, dv};
	for (auto e : fvec)
		cout << e(20, 10) << " ";
	cout << endl;

	return 0;
}
