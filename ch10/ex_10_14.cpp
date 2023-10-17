#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int a, b;
	cin >> a >> b;
	auto add = [](int a, int b) { return a + b; };
	cout << add(10, 20) << endl;
	//cout << [](int a, int b) { return a + b; }(a, b) << endl;
	return 0;
}
