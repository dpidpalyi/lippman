#include <iostream>

#include "Sales_item.h"

int main() {
  Sales_item curr, result = {};
  std::cin >> result;
  while (std::cin >> curr) {
    if (curr.isbn() == result.isbn())
      result += curr;
    else
      break;
  }
  std::cout << result << std::endl;
}
