#include <cctype>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s("some string");
  if (s.begin() != s.end()) {
    auto it = s.begin();
    *(it + 3) = std::toupper(*(it + 3));
  }
  for (auto c : s) cout << c;
  cout << endl;
  return 0;
}
