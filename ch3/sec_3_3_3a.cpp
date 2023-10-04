#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<unsigned> v(11);
	unsigned in;
	while (cin >> in)
		if (in <= 100)
			++v[in / 10];
	for (auto e: v)
		cout << e << " ";
	cout << endl;
	return 0;
}

