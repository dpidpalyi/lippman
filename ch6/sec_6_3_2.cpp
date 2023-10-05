#include <iostream>
#include <string>

using std::string;

// incorrect return values, this code will not compile
bool str_subrange(const string &str1, const string &str2) {
  // same sizes: return normal equality test
  if (str1.size() == str2.size()) return str1 == str2;  // ok: == returns bool
  // find the size of the smaller string; conditional operator
  auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
  // loot at each element up to the size of the smaller string
  for (decltype(size) i = 0; i != size; ++i) {
    if (str1[i] != str2[i]) return false;  // error #1: no return value;
  }

  return true;
  // error #2: control might flow off then of the function without return
}
