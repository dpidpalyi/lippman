#include <iostream>

int main() {
  int a = 3, b = 4;
  decltype(a) c = a;    // c is plain int and initialized with 3;
  decltype((b)) d = a;  // d is reference &int and bind to a;
  ++c;                  // 4
  ++d;                  // a = 4
  std::cout << a << b << c << d << std::endl;
  return 0;
}
