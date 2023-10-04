#include <iostream>
/*
 * Simple main function:
 * Read two numbers and write their multiplication
 */

int main() {
  // prompt user to enter two numbers
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The mul of " << v1 << " and " << v2 << " is " << v1 * v2
            << std::endl;
  return 0;
}
