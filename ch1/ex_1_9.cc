#include <iostream>

int main() {
  int sum = 0, val = 50;
  while (val <= 100) sum += val++;
  std::cout << "The sum from 50 to 100 is " << sum << std::endl;
  return 0;
}
