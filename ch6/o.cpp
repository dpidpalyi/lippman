#include <iostream>

using std::cout;
using std::endl;

void foo(int &a) { cout << "reference to int = " << a << endl; }

void foo(const int &a) { cout << "reference to const int = " << a << endl; }

void foo(int *a) { cout << "pointer to int = " << *a << endl; }

void foo(const int *a) { cout << "pointer to const int = " << *a << endl; }

int main() {
  foo(10);
  int a = 20;
  foo(a);
  int &ra = a;
  foo(ra);
  foo(&a);
  const int b = 30;
  foo(&b);

  return 0;
}
