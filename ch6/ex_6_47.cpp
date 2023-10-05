#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void print(vector<int>::const_iterator iv,
           const vector<int>::const_iterator &end_) {
#ifndef NDEBUG
  std::clog << "In " << __func__ << ". Current vector size: " << end_ - iv
            << endl;
#endif  // NDEBUG
  if (iv != end_) {
    cout << *iv << " ";
    print(++iv, end_);
  }
}

int main() {
  vector<int> iv(10);
  for (decltype(iv.size()) i = 0; i != iv.size(); ++i) iv[i] = i;
  print(iv.begin(), iv.end());

  return 0;
}
