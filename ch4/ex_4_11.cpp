#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a > b && b > c && c > d)
    cout << "yes";
  else
    cout << "no";
  cout << endl;
  return 0;
}
