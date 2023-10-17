#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::endl;
using std::vector;
using std::accumulate;

int main() {
	vector<double> vi{1.5, 2.5};
	// expected 4.0, but 3 output. Because init value is int(0)
	cout << accumulate(vi.cbegin(), vi.cend(), 0) << endl;

	return 0;
}
