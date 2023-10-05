#include <iostream>

using std::cout;
using std::endl;

int main() {
  constexpr size_t rows = 3;
  constexpr size_t cols = 4;
  int ia[rows][cols];

  for (size_t i = 0; i != rows; ++i)
    for (size_t j = 0; j != cols; ++j) ia[i][j] = i * cols + j;

  for (auto &row : ia) {
    for (auto &col : row) cout << col << " ";
    cout << endl;
  }
  cout << endl;

  for (size_t i = 0; i < rows; ++i) {
    for (size_t j = 0; j < cols; ++j) cout << ia[i][j] << " ";
    cout << endl;
  }
  cout << endl;

  for (auto p = ia; p < ia + rows; ++p) {
    for (auto q = *p; q < *p + cols; ++q) cout << *q << " ";
    cout << endl;
  }

  return 0;
}
