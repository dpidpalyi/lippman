#include <cctype>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool any_capital(const string &s) {
  for (const auto c : s)
    if (std::isupper(c)) return true;

  return false;
}

void to_lower(string &s) {
  for (auto &c : s) c = std::tolower(c);
}

int main() {
  string s = {"HELLO!"};
  to_lower("Hello");
  cout << s << endl;
  cout << any_capital("hello!") << endl;

  return 0;
}
