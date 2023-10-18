#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void add(int n) {
	auto foo = [&n]() -> bool { return n > 0 ? !--n : !n; };
	while (n) {
		foo();
		cout << n << endl;
	}
}

int main() {
	int n;
	cin >> n;
	add(n);

	return 0;
}
