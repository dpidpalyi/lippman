#include <iostream>

void reset(int *i) { *i = 20; }

void reset(int &i) { i = 0; }

int main() {
  int j = 10;
  std::cout << "j = " << j << std::endl;
  reset(j);
  std::cout << "j = " << j << std::endl;
  reset(&j);
  std::cout << "j = " << j << std::endl;

  return 0;
}
