#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int a, b;
  if (cin >> a >> b) {
    if (b == 0) throw std::invalid_argument("Division by zero!");
    cout << a << "/" << b << " = " << a / b << endl;
  }
  return 0;
}
