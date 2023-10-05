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
  auto it = ivec.cbegin();
  for (decltype(len) i = 0; i < len; i += 2) {
    n = *it;
    ++it;
    if (i + 1 < len) n += *(it++);
    cout << n << " ";
  }
  cout << endl;

  return 0;
}
