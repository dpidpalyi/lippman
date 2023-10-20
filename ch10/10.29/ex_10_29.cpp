#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;
using std::istream_iterator;

int main() {
	ifstream ifs("input.data");
	if (ifs) {
		istream_iterator<string> it(ifs), eof;
		vector<string> vs(it, eof);
		
		for (const auto &w : vs)
			cout << w << endl;
	} else
		cout << "Wrong file!" << endl;

	return 0;
}
