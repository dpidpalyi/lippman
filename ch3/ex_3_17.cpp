#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string word;
  vector<string> sv;
  while (cin >> word) sv.push_back(word);
  for (auto &w : sv)
    for (auto &c : w)
      if (!std::ispunct(c)) c = std::toupper(c);
  for (decltype(sv.size()) i = 0; i < sv.size(); ++i) {
    if (i && (i % 8 == 0)) cout << endl;
    cout << sv[i] << " ";
  }
  cout << endl;
  return 0;
}
