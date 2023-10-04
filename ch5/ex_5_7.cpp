#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int get_value() { return 1; }

int main() {
  int ival1, ival2;
  cin >> ival1 >> ival2;
  if (ival1 != ival2)
    ival1 = ival2;
  else
    ival1 = ival2 = 0;
  cout << ival1 << " " << ival2 << endl;

  int ival, minval, occurs = 0;
  cin >> ival >> minval;
  if (ival < minval) {
    minval = ival;
    occurs = 1;
  }
  cout << ival << " " << minval << " " << occurs << endl;

  if (int ival_ = get_value())
    cout << "ival_ = " << ival_ << endl;
  else
    cout << "ival_ = 0\n";

  if (ival == 0) ival = get_value();
  cout << "ival = " << ival << endl;

  return 0;
}
