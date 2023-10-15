#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void replace_all(string &s, const string &oldVal, const string &newVal) {
	auto oldSize = oldVal.size();
	auto newSize = newVal.size();
	for (auto i = s.begin(); i < s.end() - oldSize; ++i) {
		if (oldVal == string{i, i + oldSize}) {
			i = s.erase(i, i + oldSize);
			i = s.insert(i, newVal.begin(), newVal.end());
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
