#include <iostream>

int main() {
  int *ip, i, &r = i;
  i = 10;
  std::cout << r;
  ip = &i;
  std::cout << *ip;
  return 0;
}
