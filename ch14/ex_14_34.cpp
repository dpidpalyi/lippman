#include <iostream>

class IfThenElse {
	public:
		int operator()(bool test, int two, int three) const {
			return test ? two : three;
		}
};

int main() {
	IfThenElse i;
	std::cout << i(2 < 3, 2, 3) << std::endl;
	return 0;
}
