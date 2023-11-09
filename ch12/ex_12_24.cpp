#include <new>
#include <iostream>

const unsigned SIZE = 8;

using std::cin;
using std::cout;
using std::endl;

void check(std::size_t &size, std::size_t idx, char **cp) {
	if (idx == size - 1) {
		char *temp = new char[size * 2];
		for (std::size_t i = 0; i < size; ++i)
			temp[i] = (*cp)[i];
		delete[] (*cp);
		*cp = temp;
	}
}

int main() {
	std::size_t size = SIZE, idx = 0;
	char *cp = new char[SIZE];
	char c;
	for (; cin >> c; ++idx) {
		check(size, idx, &cp);
		cp[idx] = c;
	}
	cp[idx] = '\0';

	for (std::size_t idx = 0; cp[idx]; ++idx) {
		cout << cp[idx];
	}
	cout << endl;

	delete[] cp;

	return 0;
}
