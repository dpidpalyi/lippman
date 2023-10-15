#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cerr << "Wrong parameters" << endl;
		return -1;
	}

	ifstream ifs(argv[1]);
	if (!ifs) {
		cerr << "Can't open file: " << argv[1] << endl;
		return -1;
	}

	string ascdesc("bdfghijklpqty");
	string curr, longest;
	while (ifs >> curr)
		if (curr.find_first_of(ascdesc) == string::npos && longest.size() < curr.size())
			longest = curr;

	cout << longest << endl;

	return 0;
}
