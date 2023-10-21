#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::list;

int main() {
	std::istream_iterator<int> it(cin), eof;
	list<int> li(it, eof);
	auto found = std::find(li.crbegin(), li.crend(), 0);
	
	cout << *found << endl;
	cout << std::distance(found, li.crend()) << endl;

	return 0;
}
