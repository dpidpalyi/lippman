#include <iostream>

int main() {
  auto a = 10;
  auto pa = &a;
  std::cout << *pa << std::endl;
  return 0;
}
