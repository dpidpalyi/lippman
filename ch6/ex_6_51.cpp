#include <iostream>

using std::cout;
using std::endl;

void f() { cout << "f()" << endl; }

void f(int) { cout << "f(int)" << endl; }

void f(int, int) { cout << "f(int, int)" << endl; }

void f(double, double = 3.14) { cout << "f(double, double)" << endl; }

int main() {
  // f(2.56, 42); // ambiguous
  f(42);          // f(int)
  f(42, 0);       // f(int, int)
  f(2.56, 3.14);  // f(double, double)
  return 0;
}
