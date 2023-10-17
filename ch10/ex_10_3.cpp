#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::endl;
using std::vector;
using std::accumulate;

int main() {
	vector<int> vi{1, 2, 3, 4, 5, 6};
	cout << accumulate(vi.cbegin(), vi.cend(), 0) << endl;

	return 0;
}
