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
  for (auto itv = sv.begin(); itv != sv.end(); ++itv)
    for (auto its = itv->begin(); its != itv->end(); ++its)
      if (!std::ispunct(*its)) *its = std::toupper(*its);
  int i = 0;
  for (auto itv = sv.cbegin(); itv != sv.cend(); ++itv, ++i) {
    if (i && (i % 8 == 0)) cout << endl;
    cout << *itv << " ";
  }
  cout << endl;
  return 0;
}
