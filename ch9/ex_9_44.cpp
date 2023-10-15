#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void replace_all(string &s, const string &oldVal, const string &newVal) {
	auto oldSize = oldVal.size();
	auto newSize = newVal.size();
	for (decltype(s.size()) i = 0; i < s.size() - oldSize; ++i) {
		if (oldVal == s.substr(i, oldSize)) {
			s.replace(i, oldSize, newVal);
			i += newSize - 1;
		}
	}
}

int main() {
	string s = "Hello, world! tho this will be tho good!";

	cout << s << endl;
	replace_all(s, "tho", "though");
	cout << s << endl;

	return 0;
}
