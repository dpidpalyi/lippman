#include <iostream>

int main() {
  int a = 10;
  int &ra = a;
  std::cout << "got: " << ra << ", want: 10" << std::endl;
  ra = 20;
  std::cout << "got: " << a << ", want: 20" << std::endl;
  a = 30;
  std::cout << "got: " << ra << ", want: 30" << std::endl;
  // int &r; // error
  // int &rb = 10; // error
  // int &rc = a * 3; // error

  double d = 3.14;
  // int &rd = d; // error

  // Let's go
  const int ci = 1024;
  const int &rci = ci;
  std::cout << "got: " << rci << ", want: 1024" << std::endl;
  // rci = 2048; // error
  // int *rci2 = ci; // error

  // And finally!
  int i = 50;
  const int &r1 = i;
  std::cout << "got: " << r1 << ", want: 50" << std::endl;
  i = 1000;
  std::cout << "got: " << r1 << ", want: 50" << std::endl;  // Ha-ha first time

  const int &r2 = 100;
  std::cout << "got: " << r2 << ", want: error"
            << std::endl;  // Ha-ha second time
  const int &r3 = r1 * 2;
  std::cout << "got: " << r3 << ", want: error"
            << std::endl;  // Ha-ha third time
  const int &rd = d;       // d = 3.14
  std::cout << "got: " << rd << ", want: error"
            << std::endl;  // Ha-ha fourth time
  d = 12345.6789;
  std::cout << "got: " << rd << ", want: 12345" << std::endl;  // Ha-ha-ha.

  return 0;
}
