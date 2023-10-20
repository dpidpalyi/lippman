#include <fstream>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[]) {
	if (argc != 4) {
		cout << "Wrong arguments!" << endl;
		return -1;
	}

	std::ifstream ifs(argv[1]);
	std::ofstream ofs_odd(argv[2]), ofs_even(argv[3]);
	if (!ifs || !ofs_odd || !ofs_even) {
		cout << "Wrong files!" << endl;
		return -1;
	}

	std::istream_iterator<int> it(ifs), eof;
	vector<int> vi(it, eof);
	std::ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");
	std::copy_if(vi.cbegin(), vi.cend(), out_odd, [](int n) { return n % 2; });
	std::copy_if(vi.cbegin(), vi.cend(), out_even, [](int n) { return !(n % 2); });

	return 0;
}
