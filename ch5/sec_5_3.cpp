#include <iostream>

int foo() { return 10; }

int main() {
  switch (int a = foo()) {
    case 0:
      std::cout << "No-o-o-o" << a << std::endl;
      break;
    case 10:
      std::cout << "Yes-s-s-s" << std::endl;
      break;
  }
  return 0;
}
