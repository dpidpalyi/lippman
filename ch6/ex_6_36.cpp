#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string odd[] = {"1", "2", "3", "4", "5"};
string even[] = {"0", "2", "4", "6", "8"};

string (&arr(int i))[5] { return (i % 2) ? odd : even; }

int main() {
  string(&a)[5] = arr(5);
  for (auto e : a) cout << e << " ";
  cout << endl;

  return 0;
}
