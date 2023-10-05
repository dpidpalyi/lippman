#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  const unsigned size = 10;
  vector<int> dst(size);
  for (decltype(dst.size()) i = 0; i != dst.size(); ++i) dst[i] = i;
  vector<int> cp = dst;
  for (auto e : cp) cout << e << " ";
  cout << endl;
  return 0;
}
