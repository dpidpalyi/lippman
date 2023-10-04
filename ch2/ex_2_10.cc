#include <iostream>

std::string global_str;
int global_int;

int main() {
  std::string local_str;
  std::cout << global_int << local_str << std::endl;
}
