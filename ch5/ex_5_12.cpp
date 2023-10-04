#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::tolower;

int main() {
  char c;
  unsigned aCnt, eCnt, iCnt, oCnt, uCnt, tabCnt, spCnt, newCnt, ffCnt, flCnt,
      fiCnt;
  aCnt = eCnt = iCnt = oCnt = uCnt = tabCnt = spCnt = newCnt = ffCnt = flCnt =
      fiCnt = 0;
  while (cin.get(c)) {
    if (tolower(c) == 'a')
      ++aCnt;
    else if (tolower(c) == 'e')
      ++eCnt;
    else if (tolower(c) == 'i')
      ++iCnt;
    else if (tolower(c) == 'o')
      ++oCnt;
    else if (tolower(c) == 'u')
      ++uCnt;
    else if (tolower(c) == 'f') {
      if (cin.get(c)) {
        if (tolower(c) == 'f')
          ++ffCnt;
        else if (tolower(c) == 'l')
          ++flCnt;
        else if (tolower(c) == 'i')
          ++fiCnt;
      }
    } else if (c == '\t')
      ++tabCnt;
    else if (c == ' ')
      ++spCnt;
    else if (c == '\n')
      ++newCnt;
  }
  cout << "a: " << aCnt << endl;
  cout << "e: " << eCnt << endl;
  cout << "i: " << iCnt << endl;
  cout << "o: " << oCnt << endl;
  cout << "u: " << uCnt << endl;
  cout << "tabs: " << tabCnt << endl;
  cout << "spaces: " << spCnt << endl;
  cout << "newlines: " << newCnt << endl;
  cout << "ff: " << ffCnt << endl;
  cout << "fl: " << flCnt << endl;
  cout << "fi: " << fiCnt << endl;
  return 0;
}
