#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	vector<char> vc = {'a', 'b', 'c', 'd', 'e'};
	string s(vc.cbegin(), vc.cend());

	cout << s << endl;

	return 0;
}
