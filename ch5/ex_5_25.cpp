#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int a, b;
  while (cin >> a >> b) {
    try {
      if (b == 0) throw std::invalid_argument("Division by zero!");
      cout << a << "/" << b << " = " << a / b << endl;
      break;
    } catch (const std::invalid_argument &err) {
      cout << err.what() << "\nTry again? Enter 'y' or press any key to exit"
           << endl;
      char c;
      cin >> c;
      if (!cin || c != 'y') break;
    }
  }
  return 0;
}
