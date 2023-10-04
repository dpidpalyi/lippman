#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string curr, prev;
	bool repeat = false;
	while (cin >> curr) {
		if (std::islower(curr[0]))
			continue;
		if (curr == prev) {
			repeat = true;
			break;
		} else
			prev = curr;
	}
	if (!repeat)
		cout << "No word was repeated." << endl;
	else
		cout << curr;
	return 0;
}
