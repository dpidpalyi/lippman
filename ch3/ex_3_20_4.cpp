#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec;
	int n;
	while (cin >> n)
		ivec.push_back(n);
	for (auto bit = ivec.cbegin(), eit = ivec.cend(); bit != eit;) {
		--eit;
		if (bit == eit)
			cout << *bit;
		else {
			cout << *bit + *eit << " ";
			++bit;
		}
	}
	cout << endl;
		
	return 0;
}
