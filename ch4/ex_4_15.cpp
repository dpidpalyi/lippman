#include <iostream>

int main() {
	double dval;
	int ival, *pi;
	//dval = ival = pi = 0; // error because different types;
	dval = 0.;
	ival = 0;
	pi = nullptr;
	std::cout << dval << " " << ival << " " << pi << std::endl;
	return 0;
}
