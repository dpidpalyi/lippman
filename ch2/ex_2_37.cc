#include <iostream>

int main() {
  int a = 3, b = 4;
  decltype(a) c = a;                           // int
  decltype(a = b) d = a;                       // int & bint to a
  std::cout << a << b << c << d << std::endl;  // 3433
  return 0;
}
