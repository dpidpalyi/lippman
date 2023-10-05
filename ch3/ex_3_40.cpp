#include <cstddef>
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;
using std::strcat;
using std::strcpy;

int main() {
  char s1[] = "Hello";
  char s2[] = "world";
  constexpr std::size_t size = sizeof(s1) + sizeof(s2);
  char s3[size];

  strcpy(s3, s1);
  strcat(s3, s2);

  cout << s3 << endl;

  return 0;
}
