#include <vector>
#include <iostream>

int f() { return 0; }

int main() {
	std::vector<int> vi(100);
	int &&r1 = f(); // nonreference type
	int &r2 = vi[0]; // subcript operator
	r2 = 100;
	std::cout << vi[0] << std::endl;
	int &r3 = r1; // variable
	int &&r4 = vi[0] * f(); // arithmetic operator

	std::cout << r1 << r2 << r3 << r4 << std::endl;

	return 0;
}
