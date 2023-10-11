#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::list;
using std::vector;
using std::string;

int main() {
	list<const char*> clist = {"Hello", "World", "from", "Russia"};
	vector<string> svec;
	svec.assign(clist.cbegin(), clist.cend());

	for (const auto &e : svec)
		cout << e << " ";
	cout << endl;

	return 0;
}
