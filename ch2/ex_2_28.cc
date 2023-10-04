#include <iostream>

int main() {
  int *p1, *const cp = nullptr;
  (void)p1;
  std::cout << cp << std::endl;
  return 0;
}
