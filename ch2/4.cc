#include <iostream>

int main() {
  double obj = 3.14;
  void *pv = &obj;
  double *pd;
  pd = (double *)pv;
  std::cout << pv << std::endl;
  std::cout << *pd << std::endl;
  return 0;
}
