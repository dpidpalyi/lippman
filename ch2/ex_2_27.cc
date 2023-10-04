#include <iostream>

int main() {
  // int i2 = 10;
  ////int i = -1, &r = 0; // error
  // int *const p2 = &i2; // Ok
  // std::cout << *p2 << std::endl;
  // const int i = -1, &r = 0; // Ok
  // std::cout << i << std::endl;
  // std::cout << r << std::endl;
  // const int *const p3 = &i2; // error
  // std::cout << *p3 << std::endl;
  // i2 = 100;
  // std::cout << *p3 << std::endl;
  // const int *p1 = &i2;
  // i2 = 1;
  // std::cout << *p1 << std::endl;
  double i = -1;
  const int i2 = i, &r = i;
  i = -10;
  std::cout << i << ' ' << i2 << ' ' << r << std::endl;
}
