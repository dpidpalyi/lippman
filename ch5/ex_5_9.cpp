#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  char c;
  unsigned aCnt, eCnt, iCnt, oCnt, uCnt;
  aCnt = eCnt = iCnt = oCnt = uCnt = 0;
  while (cin >> c) {
    c = std::tolower(c);
    if (c == 'a')
      ++aCnt;
    else if (c == 'e')
      ++eCnt;
    else if (c == 'i')
      ++iCnt;
    else if (c == 'o')
      ++oCnt;
    else if (c == 'u')
      ++uCnt;
  }
  cout << "a: " << aCnt << endl;
  cout << "e: " << eCnt << endl;
  cout << "i: " << iCnt << endl;
  cout << "o: " << oCnt << endl;
  cout << "u: " << uCnt << endl;
  return 0;
}
