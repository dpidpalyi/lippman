#include <initializer_list>
#include <iostream>

using std::cout;
using std::endl;
using std::initializer_list;

int sum(const initializer_list<int> &il) {
  int res = 0;
  for (auto &e : il) res += e;

  return res;
}

int main() {
  initializer_list<int> il = {10, 20, 30, 40, 50};
  cout << sum(il) << endl;
  cout << sum({1, 2, 3, 4, 5}) << endl;

  return 0;
}
