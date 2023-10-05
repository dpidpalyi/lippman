#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<int> v1;
  auto len1 = v1.size();
  cout << len1 << endl;
  for (auto e : v1) cout << e << " ";
  cout << endl;

  vector<int> v2(10);
  auto len2 = v2.size();
  cout << len2 << endl;
  for (auto e : v2) cout << e << " ";
  cout << endl;

  vector<int> v3(10, 42);
  auto len3 = v3.size();
  cout << len3 << endl;
  for (auto e : v3) cout << e << " ";
  cout << endl;

  vector<int> v4{10};
  auto len4 = v4.size();
  cout << len4 << endl;
  for (auto e : v4) cout << e << " ";
  cout << endl;

  vector<int> v5{10, 42};
  auto len5 = v5.size();
  cout << len5 << endl;
  for (auto e : v5) cout << e << " ";
  cout << endl;

  vector<string> v6{10};
  auto len6 = v6.size();
  cout << len6 << endl;
  for (auto e : v6) cout << e << " ";
  cout << endl;

  vector<string> v7{10, "hi"};
  auto len7 = v7.size();
  cout << len7 << endl;
  for (auto e : v7) cout << e << " ";
  cout << endl;
  return 0;
}
