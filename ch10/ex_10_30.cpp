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
	copy(vi.cbegin(), vi.cend(), ot);
	cout << endl;

	return 0;
}
