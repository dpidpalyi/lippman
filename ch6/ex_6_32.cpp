#include <iostream>

int &get(int *arry, int index) { return arry[index]; }

int main() {
  int ia[10]{0};
  for (auto &e : ia) std::cout << e << " ";
  std::cout << std::endl;
  for (int i = 0; i != 10; ++i) get(ia, i) = i;
  for (auto &e : ia) std::cout << e << " ";
  std::cout << std::endl;

  return 0;
}
