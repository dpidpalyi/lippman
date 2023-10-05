#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int a;
  cin >> a;
  if (a % 2)
    cout << "Odd" << endl;
  else
    cout << "Even" << endl;
  return 0;
}
