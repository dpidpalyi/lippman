#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec1; // Default constructor
	vector<int> ivec2{1, 2, 3, 4, 5}; // List initialization
	vector<int> ivec3 = {1, 2, 3, 4, 5}; // List initialization
	vector<int> ivec4(10); // Size-related constructor
	vector<int> ivec5(10, 5); // Size-relate constructor
	vector<int> ivec6(ivec2); // Copy constructor
	vector<int> ivec7 = ivec3; // Copy constructor
	vector<int> ivec8(ivec4.begin(), ivec4.end()); // Iterator constructor

	cout << ivec1.size() << endl;
	cout << ivec2.size() << endl;
	cout << ivec3.size() << endl;
	cout << ivec4.size() << endl;
	cout << ivec5.size() << endl;
	cout << ivec6.size() << endl;
	cout << ivec7.size() << endl;
	cout << ivec8.size() << endl;

	return 0;
}
