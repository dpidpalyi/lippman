#include <iostream>

int main() {
  int x = 10, y = 20;
  (x < y) ? ++x, ++y : --x, --y = 40;
  std::cout << y << " = 40" << std::endl;
  std::cout << x << " = 11" << std::endl;
  return 0;
}
