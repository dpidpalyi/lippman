#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> v(10, 10);
  for (auto it = v.cbegin(); it != v.cend(); ++it) cout << *it;
  cout << endl;
  return 0;
}
