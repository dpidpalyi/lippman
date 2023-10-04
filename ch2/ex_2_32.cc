#include <iostream>

int main() {
  int null = 0;
  int *p = &null;
  std::cout << *p << std::endl;
  return 0;
}
