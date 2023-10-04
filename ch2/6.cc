#include <iostream>

int main() {
  int a = 10, b = 20;
  const int *p2 = &a;
  const int *const p1 = &b;
  p2 = p1;
  std::cout << *p1 << *p2 << std::endl;
  return 0;
}
