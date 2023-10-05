#include "Chapter6.h"

int main() {
  unsigned n;
  cout << "Enter n to evaluate factorial" << endl;
  while (cin >> n) {
    try {
      cout << fact(n) << endl;
      break;
    } catch (std::overflow_error &err) {
      cout << err.what() << "\nWant to try again? Enter 'y' or 'n': ";
      char c;
      if (!(cin >> c) || c != 'y') break;
    }
  }

  return 0;
}
