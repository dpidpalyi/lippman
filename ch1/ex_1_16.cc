#include <iostream>

int main() {
  int sum = 0;
  for (int val; std::cin >> val;) sum += val;
  std::cout << "The sum is: " << sum << std::endl;
  return 0;
}
