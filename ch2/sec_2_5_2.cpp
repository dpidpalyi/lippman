#include <iostream>

int main() {
  int i = 0;
  const int ci = i;
  auto &ri = i;
  auto p2 = &ci;
  std::cout << i << ri << *p2 << std::endl;
  return 0;
}
