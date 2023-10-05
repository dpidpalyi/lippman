#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string word;
  while (getline(cin, word))
    if (!word.empty()) cout << word << endl;
  return 0;
}
