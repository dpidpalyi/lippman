#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;

string make_plural(std::size_t ctr, const string &word, const string &ending = "s") {
	return (ctr > 1) ? word + ending : word;
}

int main() {
	cout << make_plural(2, "car", "s") << endl;
	cout << make_plural(5, "mouse") << endl;
	return 0;
}
