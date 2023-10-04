#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	int arr[] = {0, 1, 2, 3, 4};
	vector<int> ivec(arr, arr + 5);

	for (auto e : ivec)
		cout << e << " ";
	cout << endl;

	return 0;
}
