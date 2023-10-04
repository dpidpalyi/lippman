#include <iostream>

int main() {
  int i = 0;
  int *const p1 = &i;
  const int ci = 42;
  const int *p2 = &ci;
  const int *const p3 = p2;
  const int &r = ci;

  std::cout << i << *p1 << ci << *p2 << *p3 << r << std::endl;

  i = ci;
  p2 = p3;
  std::cout << i << *p1 << ci << *p2 << *p3 << r << std::endl;

  return 0;
}
