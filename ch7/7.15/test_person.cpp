#include "Person.h"

int main() {
  Person A;
  print(std::cout, A) << std::endl;

  Person B("Boris");
  print(std::cout, B) << std::endl;

  Person C("Clare", "San-Jose");
  print(std::cout, C) << std::endl;

  Person D(std::cin);
  print(std::cout, D) << std::endl;

  return 0;
}
