#include <cstring>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::strcmp;
using std::string;

int main() {
  string s1 = "Hello world";
  string s2 = "Hello world";
  if (s1 == s2)
    cout << "Equal." << endl;
  else
    cout << "Not equal." << endl;

  char s3[] = "Hello world";
  char s4[] = "Hello world";
  if (!strcmp(s3, s4))
    cout << "Equal." << endl;
  else
    cout << "Not equal." << endl;

  return 0;
}
