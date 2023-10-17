#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void adder(int a) {
	auto add = [a](int b) { return a + b; };
	cout << add(10) << endl;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << [](int a, int b) { return a + b; }(a, b) << endl;
	adder(a);
	return 0;
}
