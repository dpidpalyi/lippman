#include <iostream>
using std::cout; using std::endl;

class numbered {
public:
  numbered() : mysn(++sn) {}
  numbered(const numbered&): mysn(++sn) {}
  int mysn;
private:
  static int sn;
};

int numbered::sn = 0;

void f(numbered s) {
  cout << s.mysn << endl;
}

int main() {
  numbered a, b = a, c = b; // 1, 2, 3
  f(a);  // 4
  f(b);  // 5
  f(c);  // 6
  numbered d; // 7
  f(d);  // 8

  return 0;
}
