#include <iostream>

#include "Sales_item.h"

int main() {
  Sales_item curr, res;
  std::cin >> res;
  int cnt = 1;
  while (std::cin >> curr) {
    if (curr.isbn() == res.isbn())
      ++cnt;
    else {
      std::cout << res.isbn() << " count = " << cnt << std::endl;
      res = curr;
      cnt = 1;
    }
  }
  std::cout << res.isbn() << " count = " << cnt << std::endl;
  return 0;
}
