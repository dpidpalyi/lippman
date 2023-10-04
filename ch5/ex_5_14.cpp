#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string curr, prev, max_str;
  unsigned cnt = 1, max = 1;
  if (cin >> prev) {
    max_str = prev;
    while (cin >> curr) {
      if (curr == prev)
        ++cnt;
      else {
        if (cnt > max) {
          max = cnt;
          max_str = prev;
        }
        cnt = 1;
        prev = curr;
      }
    }
    if (cnt > max) {
      max = cnt;
      max_str = prev;
    }

    if (max > 1)
	    cout << max_str << " occured " << max << " times." << endl;
    else 
	    cout << "No words repeated." << endl;
  } else
    cout << "Bad input!" << endl;
  return 0;
}
