#include <deque>
#include <iostream>
#include <list>

using std::cout;
using std::deque;
using std::endl;
using std::list;

int main() {
  list<int> lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  deque<int> ideq1, ideq2;

  for (const auto &e : lst)
    // if (e % 2)
    //	ideq2.push_back(e);
    // else
    //	ideq1.push_back(e);
    (e % 2 ? ideq2 : ideq1).push_back(e);

  cout << "list = ";
  for (const auto &e : lst) cout << e << " ";
  cout << endl;

  cout << "ideq1 = ";
  for (const auto &e : ideq1) cout << e << " ";
  cout << endl;
cout << "ideq2 = "; for (const auto &e : ideq2) cout << e << " ";
  cout << endl;

  return 0;
}
