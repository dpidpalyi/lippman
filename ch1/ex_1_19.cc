#include <iostream>

int main() {
  int v1, v2;
  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> v1 >> v2;
  if (v1 < v2) {
    for (; v1 <= v2; ++v1) std::cout << v1 << ' ';
    std::cout << std::endl;
  } else
    std::cout << v1 << " is equal or more then " << v2 << std::endl;
  return 0;
}
