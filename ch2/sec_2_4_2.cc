#include <iostream>

int main() {
  int d = 1;
  const int &rd = d;
  std::cout << rd << std::endl;
  d = 10;
  std::cout << rd << std::endl;
  int err = 5;
  int *const p_err = &err;
  std::cout << *p_err << std::endl;
  *p_err = 20;
  std::cout << err << std::endl;
  const double pi = 3.14;
  const double *const *p = &pi;
  std::cout << *p << std::endl;

  return 0;
}
