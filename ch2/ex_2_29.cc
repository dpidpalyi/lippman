#include <iostream>

int main() {
  int a = 10;
  const int ic = 5;
  const int *p1 = &a;
  p1 = &ic;
  std::cout << a << *p1 << ic << std::endl;
  return 0;
}
