#include <cctype>
#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s("hello world!!!");
  for (auto &c : s) c = toupper(c);
  cout << s << endl;
  return 0;
}
