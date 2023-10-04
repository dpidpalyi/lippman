#include <iostream>

int main() {
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, *const p3 = &v1, &r2 = v2;
	std::cout << v1 << v2 << *p1 << *p2 << *p3 << r1 << r2 << std::endl;
	r1 = v2;
	//p1 = p2; //error
	p2 = p1;
	//p1 = p3; //error
	p2 = p3;

	return 0;
}
