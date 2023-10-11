#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main() {
	list<int> ilist = {1, 2, 3, 4, 5};
	vector<int> ivec = {1, 2, 3, 4, 5};
	vector<double> dvec1(ilist.begin(), ilist.end());
	vector<double> dvec2(ivec.begin(), ivec.end());

	cout << ilist.size() << endl;
	cout << ivec.size() << endl;
	cout << dvec1.size() << endl;
	cout << dvec2.size() << endl;

	return 0;
}
