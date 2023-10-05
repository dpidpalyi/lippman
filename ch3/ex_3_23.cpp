#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << ivec.cbegin() - ivec.cend() << endl;
  for (auto it = ivec.begin(); it != ivec.end(); ++it) *it *= 2;
  for (auto it = ivec.cbegin(); it != ivec.cend(); ++it) cout << *it << " ";
  cout << endl;

  return 0;
}
