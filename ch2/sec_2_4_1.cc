#include <iostream>

int main() {
  int i = 42;
  const int &r1 = i;
  const int &r2 = 42;
  const int &r3 = r1 * 2;
  std::cout << r1 << ' ' << r2 << ' ' << r3 << std::endl;
  return 0;
}
