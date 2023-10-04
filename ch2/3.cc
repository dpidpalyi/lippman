#include <iostream>

int main() {
  int a = 10, *pa = &a;
  std::cout << sizeof(a) << ' ' << sizeof(pa) << std::endl;

  return 0;
}
