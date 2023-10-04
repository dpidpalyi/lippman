#include <limits>
#include <iostream>

int main () {
	int imax = std::numeric_limits<int>::max();
	int imin = std::numeric_limits<int>::min();

	//in each case, the second statement causes overflow.
	int a = imax; ++a;
	int b = imin; --b;
	int c = imax; c *= 2;
	std::cout << a << " " << b << " " << c << std::endl;
	return 0;
}
