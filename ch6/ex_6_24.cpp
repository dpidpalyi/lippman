#include <iostream>

using std::cout;
using std::endl;

void print(const int (&ia)[10]) {
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}

int main() {
	int ia[10] = {1, 2, 3, 4, 5};
	print(ia);

	return 0;
}
