#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;
using std::end;

int main() {
	int arr[] = {10, 20, 30, 40, 50};
	for (int *ptr = arr; ptr != end(arr); ++ptr)
		*ptr = 0;
	for (auto e : arr)
		cout << e << " ";
	cout << endl;
	return 0;
}
