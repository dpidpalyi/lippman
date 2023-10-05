#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s("some string");
  for (auto c : s) cout << c << endl;
  return 0;
}
