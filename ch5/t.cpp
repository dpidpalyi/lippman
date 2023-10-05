#include <iostream>
using std::cout;
using std::endl;

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  for (auto &e : arr) e *= 10;
  for (const auto e : arr) cout << e << " ";
  cout << endl;
  for (auto e : {1, 2, 3, 4, 5}) cout << e << " ";
  cout << endl;
  return 0;
}
