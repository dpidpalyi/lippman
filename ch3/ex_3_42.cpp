#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	constexpr std::size_t size = 5;
	vector<int> ivec;
	int arr[size];

	for (size_t i = 0; i < size; ++i)
		ivec.push_back(i * 3);

	for (size_t i = 0; i < size; ++i)
		arr[i] = ivec[i];
	for (auto e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}
