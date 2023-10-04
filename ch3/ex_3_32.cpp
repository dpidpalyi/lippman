#include <iostream>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;

int main() {
	const int size = 10;
	int arr[size], cp[size];
	for (size_t i = 0; i < size; ++i) {
		arr[i] = i;
	}
	for (size_t i = 0; i < size; ++i) {
		cp[i] = arr[i];
		cout << cp[i] << " ";
	}
	cout << endl;
	return 0;
}
