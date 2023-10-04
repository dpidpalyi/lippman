#include "Sales_data.h"

using std::cin;
using std::cerr;
using std::cout;
using std::endl;

int main() {
	Sales_data total = {};
	total.bookNo = "Hello";
	cout << total.isbn() << endl;
	//if (read(cin, total)) {
	//	Sales_data trans;
	//	while(read(cin, trans)) {
	//		if (total.isbn() == trans.isbn())
	//			total.combine(trans);
	//		else {
	//			print(cout, total) << endl;
	//			total = trans;
	//		}
	//	}
	//	print(cout, total) << endl;
	//} else {
	//	cerr << "No data?!" << endl;
	//}

	return 0;
}
