#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cout;
using std::endl;
using std::string;

int main() {
	vector<string> vec{"10", "a"};
	for (auto el : vec)
		cout << el;
	cout << endl;
	return 0;
}

