#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> v(20);
  for (decltype(v.size()) i = 0; i < v.size(); ++i) v[i] = i;
  for (auto e : v) cout << e << " ";
  auto beg = v.begin(), end = v.end();
  auto mid = v.begin() + (end - beg) / 2;
  int n, step = 1;
  cin >> n;
  while (mid != end && *mid != n) {
    if (n < *mid)
      end = mid;
    else
      beg = mid + 1;
    mid = beg + (end - beg) / 2;
    ++step;
  }
  if (*mid == n)
    cout << step << endl;
  else
    cout << "Can't find." << endl;
  return 0;
}
