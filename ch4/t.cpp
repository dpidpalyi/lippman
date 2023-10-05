#include <iostream>

using std::cout;
using std::endl;

int main() {
  int a[] = {10, 20, 30, 50};
  auto p = std::begin(a);
  while (p != std::end(a) && *p >= 0) cout << *++p << endl;

  return 0;
}
