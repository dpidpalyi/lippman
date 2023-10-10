#include <iostream>
#include <sstream>
#include <string>

std::istream &foo(std::istream &is) {
  char c;
  while (is >> c) std::cout << c;
  is.clear();

  return is;
}

int main() {
  std::istringstream ifs("Hello world!");
  std::istream &is = foo(ifs);
  std::cout << std::endl << is.rdstate() << std::endl;

  return 0;
}
