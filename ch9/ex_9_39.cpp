#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	vector<string> svec;
	svec.reserve(1024); // reserve 1024 elements for capacity, if it need to allocate
	string word;
	while (cin >> word)
		svec.push_back(word); // on the first step, capacity = 1024
	svec.resize(svec.size() + svec.size() / 2); // sets current size to 1.5 from size;

	return 0;
}
