#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  Sales_data sales1;
  std::cout << sales1.bookNo << ' ' << sales1.units_sold << ' ' << std::endl;
  return 0;
}
