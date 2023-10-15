#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string full_name(string &name, const string &prefix, const string &suffix) {
	name.insert(0, prefix);
	return name.insert(name.size(), suffix);
}

int main() {
	string name("John");
	cout << full_name(name, "Mr.", ", Jr.") << endl;
	return 0;
}
