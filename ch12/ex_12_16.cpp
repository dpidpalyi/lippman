#include <iostream>
#include <memory>

int main() {
	std::unique_ptr<int> p1(new int(10));
	std::unique_ptr<int> p2(p1);
	std::unique_ptr<int> p3;
	p3 = p2;

	return 0;
}

