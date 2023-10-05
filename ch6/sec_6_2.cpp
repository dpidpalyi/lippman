#include <initializer_list>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void error_msg(std::initializer_list<string> il) {
  for (auto beg = il.begin(); beg != il.end(); ++beg) cout << *beg << " ";
  cout << endl;
}

int main() {
  // std::initializer_list<string> il = {"error", "message", "log"};
  string error2 = "error2";
  error_msg({"error1", error2, "error3"});

  return 0;
}
