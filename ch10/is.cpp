#include <iostream>
#include <iterator>
#include <vector>

using std::cin;
using std::endl;
using std::cout;
using std::vector;

int main() {
	std::istream_iterator<int> in_iter(cin), eof;
	vector<int> vec(in_iter, eof);

	for (const auto &e : vec)
		cout << e << " ";
	cout << endl;

	return 0;
}
