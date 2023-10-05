#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n;
  while (cin >> n && n != 42) cout << n << endl;
  return 0;
}
