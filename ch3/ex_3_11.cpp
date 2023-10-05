#include <cctype>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  const string s = "Keep out!";
  for (auto &c : s) cout << c;
  cout << endl;
  return 0;
}
