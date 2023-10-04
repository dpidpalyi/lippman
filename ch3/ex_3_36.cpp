#include <iostream>
#include <vector>
#include <cstddef>

using std::endl;
using std::cin;
using std::cout;
using std::vector;

int main() {
	constexpr std::ptrdiff_t size = 5;
	int arr1[size], arr2[size];
	int eq = 1;
	for (size_t i = 0; i < size; ++i)
		cin >> arr1[i];
	for (size_t i = 0; i < size; ++i)
		cin >> arr2[i];
	for (size_t i = 0; i < size; ++i)
		if (arr1[i] != arr2[i]) {
			eq = 0;
			break;
		}

	if (eq)
		cout << "The arrays are equal." << endl;
	else
		cout << "The arrays are not equal." << endl;

	vector<int> v1{10, 20, 30};
	vector<int> v2{1, 20, 30};

	if (v1 == v2)
		cout << "The vectors are equal." << endl;
	else
		cout << "The vectors are not equal." << endl;

	return 0;
}
