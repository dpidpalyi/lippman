#include "Person.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  Person Ivan(cin);
  print(cout, Ivan) << endl;

  Person Ruslan("Ruslan");
  print(cout, Ruslan) << endl;

  Person Igor("Igor", "Yugorsk");
  print(cout, Igor) << endl;

  return 0;
}
