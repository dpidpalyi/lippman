#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	vector<string> vs{"10", "20.5", "30", "40"};
	int sumi = 0;
	double sumd = 0;

	for (const auto &n : vs) {
		sumi += stoi(n);
		sumd += stod(n);
	}

	cout << "Sum of ints = " << sumi << endl;
	cout << "Sum of floats = " << sumd << endl;

	return 0;
}
