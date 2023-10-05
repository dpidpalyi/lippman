#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> vec{"10", "a"};
  for (auto el : vec) cout << el;
  cout << endl;
  return 0;
}
