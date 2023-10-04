#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	// Idiomatic for loop
	for (int i = 0; i < 10; ++i)
		cout << i << " ";
	cout << endl;

	int i = 0;
	while (i < 10)
		cout << i++ << " ";
	cout << endl;
	
	while (cin >> i)
		cout << i * 2 << " ";
	cout << endl;

	for (int i; cin >> i;)
		cout << i * 2 << " ";
	cout << endl;

	return 0;
}
