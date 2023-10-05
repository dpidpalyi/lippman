#include <cctype>
#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string s("Hello World!!!");
  decltype(s.size()) punct_cnt = 0;
  for (auto c : s)
    if (std::ispunct(c)) ++punct_cnt;
  cout << punct_cnt << " punctuation characters in " << s << endl;
  return 0;
}
