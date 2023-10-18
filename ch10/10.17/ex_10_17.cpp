#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;

bool compareIsbn(Sales_data &sd1, Sales_data &sd2) {
	return sd1.isbn() < sd2.isbn();
}

int main() {
	vector<Sales_data> vS;
	Sales_data buff;
	while (read(cin, buff))
		vS.push_back(buff);

	cout << "==================================" << endl;
	
	sort(vS.begin(), vS.end(), [](Sales_data &sd1, Sales_data &sd2) { return sd1.isbn() < sd2.isbn(); });

	for (const auto &sd : vS)
		print(cout, sd) << endl;

	return 0;
}
