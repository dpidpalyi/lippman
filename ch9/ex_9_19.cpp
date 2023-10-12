// Need only change container type. All other works same.

#include <list>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main() {
	list<string> sdec;
	string buf;
	while (cin >> buf)
		sdec.push_back(buf);

	for (auto it = sdec.cbegin(); it != sdec.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
