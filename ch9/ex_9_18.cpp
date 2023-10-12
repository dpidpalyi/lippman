#include <deque>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::string;

int main() {
	deque<string> sdec;
	string buf;
	while (cin >> buf)
		sdec.push_back(buf);

	for (auto it = sdec.cbegin(); it != sdec.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
