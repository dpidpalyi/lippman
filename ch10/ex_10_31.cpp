#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	std::istream_iterator<int> it(cin), eof;
	std::ostream_iterator<int> ot(cout, " ");
	vector<int> vi(it, eof);

	sort(vi.begin(), vi.end());
	// 1-st method
	//auto er = std::unique(vi.begin(), vi.end());
	//vi.erase(er, vi.end());
	//copy(vi.cbegin(), vi.cend(), ot);
	// 2-nd method
	unique_copy(vi.cbegin(), vi.cend(), ot);
	cout << endl;

	return 0;
}
