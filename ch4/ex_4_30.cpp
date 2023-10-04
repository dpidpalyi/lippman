#include <iostream>

using std::cout;
using std::endl;

int foo();

int main() {
	int x = 10, y = 6;
	//int a = 1, b = 5;
	cout << (sizeof x + y) << endl;
	//cout << (sizeof a < b) << endl;
	cout << (sizeof foo()) << endl;
	return 0;
}
