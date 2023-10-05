#include <cstddef>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int arr[10] = {};
  for (size_t i = 0; i < 10; ++i) {
    arr[i] = i;
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
