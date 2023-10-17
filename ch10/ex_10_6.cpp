#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> vi(10);
	fill_n(vi.begin(), vi.size(), 0);

	for (const auto &e : vi)
		cout << e << " ";
	cout << endl;

	return 0;
}
