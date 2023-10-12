#include <iostream>
#include <list>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::list;
using std::string;

int main() {
	list<string> lst;
	auto iter = lst.begin();
	string word;
	while (cin >> word)
		//iter = lst.insert(iter, word);
		lst.insert(iter, word);

	for (const auto &w : lst)
		cout << w << " ";
	cout << endl;

	return 0;
}
