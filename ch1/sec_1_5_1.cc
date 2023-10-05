#include <iostream>

#include "Sales_item.h"

int main() {
  Sales_item book;
  // read ISBN, number of copies sold, and sales price
  std::cin >> book;
  std::cout << book << std::endl;
  return 0;
}
