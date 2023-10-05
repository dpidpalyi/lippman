#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
  Sales_data data1;
  print(cout, data1) << endl;

  Sales_data data2("ISBN:123456");
  print(cout, data2) << endl;

  Sales_data data3("ISBN:123456", 10, 10);
  print(cout, data3) << endl;

  Sales_data data4(cin);
  print(cout, data4) << endl;

  return 0;
}
