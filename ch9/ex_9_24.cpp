#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
	vector<int> ivec{1, 2, 3, 4, 5};
	vector<int> iempty;

	cout << ivec.at(3) << endl;
	cout << ivec[3] << endl;
	cout << ivec.front() << endl;
	cout << *ivec.begin() << endl;

	//cout << iempty.front() << endl;  // Sega
	//cout << *iempty.begin() << endl; // Sega
	//cout << iempty[3] << endl;	   // Sega
	//cout << iempty.at(3) << endl;    // Exception 

	return 0;
}
