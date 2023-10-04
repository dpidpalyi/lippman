#include <iostream>

int main() {
  int ival = 1.01;
  //	int &rval1 = 1.01; // error
  int &rval2 = ival;
  std::cout << rval2 << std::endl;
  //	int &rval3; // error
}
