#include <cctype>
#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s("he\tllo world!!!");
  for (decltype(s.size()) index = 0;
       index != s.size() && !std::isspace(s[index]); ++index)
    s[index] = std::toupper(s[index]);
  cout << s << endl;
  return 0;
}
