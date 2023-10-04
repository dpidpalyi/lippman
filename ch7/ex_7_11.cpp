#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	Sales_data one;
	print(cout, one) << endl;
	Sales_data two("Hello");
	print(cout, two) << endl;
	Sales_data three("Hello", 10, 10);
	print(cout, three) << endl;
	Sales_data four(cin);
	print(cout, four) << endl;

	return 0;
}
