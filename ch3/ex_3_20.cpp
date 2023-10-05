#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> ivec;
  int n;
  while (cin >> n) ivec.push_back(n);
  decltype(ivec.size()) len = ivec.size();
  for (decltype(len) i = 0; i < len; i += 2) {
    n = ivec[i];
    if (i + 1 < len) n += ivec[i + 1];
    cout << n << " ";
  }
  cout << endl;

  return 0;
}
