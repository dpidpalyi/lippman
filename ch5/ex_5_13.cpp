#include <iostream>

int main() {
  unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
  char ch = next_text();
  switch (ch) {
    case 'a':
      aCnt++;  // missing break
    case 'e':
      eCnt++;  // missing break
    default:
      iouCnt++;  // missing break
  }

  unsigned index = some_value();
  switch (index) {
    case 1:
      int ix = get_value();  // error with bypass initialization
      ivec[ix] = index;
      break;
    default:
      ix = ivec.size() - 1;
      ivec[ix] = index;

      unsigned evenCnt = 0, oddCnt = 0;
      int digit = get_num() % 10;
      switch (digit) {
        case 1, 3, 5, 7, 9:  // error, need case 1: case 3:
                             // better get_num() % 2
          oddcnt++;
          break;
        case 2, 4, 6, 8, 10:
          evencnt++;
          break;
      }
