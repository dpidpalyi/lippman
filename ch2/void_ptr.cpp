#include <iostream>

int main() {
  double obj = 3.14, *pd = &obj;
  void *pv = &obj;
  pv = pd;
  std::cout << *(int *)pv << std::endl;
  return 0;
}
