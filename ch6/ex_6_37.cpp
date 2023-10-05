#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string odd[] = {"1", "2", "3", "4", "5"};
string even[] = {"0", "2", "4", "6", "8"};

// 1-st
string (&foo1(int i))[5] { return (i % 2) ? odd : even; }

// 2-nd
using str_arr = string[5];
str_arr &foo2(int i) { return (i % 2) ? odd : even; }

// 3-rd
auto foo3(int i) -> string (&)[5] { return (i % 2) ? odd : even; }

// 4-th
decltype(odd) &foo4(int i) { return (i % 2) ? odd : even; }

int main() {
  string(&a)[5] = foo1(5);
  string(&b)[5] = foo2(5);
  string(&c)[5] = foo3(5);
  string(&d)[5] = foo4(5);
  for (auto e : a) cout << e << " ";
  cout << endl;

  for (auto e : b) cout << e << " ";
  cout << endl;

  for (auto e : c) cout << e << " ";
  cout << endl;

  for (auto e : d) cout << e << " ";
  cout << endl;

  return 0;
}
