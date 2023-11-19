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

void f(const numbered& s) {
  cout << s.mysn << endl;
}

int main() {
  numbered a, b = a, c = b;
  f(a);  // 1
  f(b);  // 2
  f(c);  // 3
  numbered d;
  f(d);  // 4

  return 0;
}
