#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::end;
using std::endl;
using std::list;
using std::vector;

int main() {
  int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  vector<int> ivec(ia, end(ia)); // Cool feature!
  list<int> ilist(ia, end(ia));
  // vector<int> ivec;
  // list<int> ilist;

  // for (const auto &e : ia) {
  //	ivec.push_back(e);
  //	ilist.push_back(e);
  //}

  auto itl = ilist.begin();
  while (itl != ilist.end())
    if (*itl % 2)
      itl = ilist.erase(itl);
    else
      ++itl;

  auto itv = ivec.begin();
  while (itv != ivec.end())
    if (!(*itv % 2))
      itv = ivec.erase(itv);
    else
      ++itv;

  for (auto &e : ia) cout << e << " ";
  cout << endl;

  for (auto &e : ivec) cout << e << " ";
  cout << endl;

  for (auto &e : ilist) cout << e << " ";
  cout << endl;

  return 0;
}
