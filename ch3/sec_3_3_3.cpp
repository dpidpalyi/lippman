#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto &i : v) {
    i *= i;
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
