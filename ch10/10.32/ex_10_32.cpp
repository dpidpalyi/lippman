#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	std::istream_iterator<Sales_item> it(cin), eof;
	vector<Sales_item> vs(it, eof);

	std::sort(vs.begin(), vs.end(), compareIsbn);
	for (auto beg = vs.cbegin(), end = beg; beg != vs.cend(); beg = end) {
		end = find_if(beg, vs.cend(), [beg](const Sales_item &item) { return item.isbn() != beg->isbn(); });
		cout << std::accumulate(beg, end, Sales_item(beg->isbn())) << endl;
	}

	return 0;
}
