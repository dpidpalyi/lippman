#include <iostream>

extern int var;

void foo();

int main() {
  foo();
  std::cout << var << std::endl;
  return 0;
}
