//what type can be used to subscript a map? - key_type
//what type does the subscript operator return ? - reference to mapped_type
//

#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::map;
using std::string;

int main() {
	map<string, int> m = {{"Hello", 1}, {"Hi", 2}};
	map<string, int>::key_type k = "Hello";
	map<string, int>::mapped_type v = m[k];

	cout << k << " " << v << endl;

	return 0;
}
