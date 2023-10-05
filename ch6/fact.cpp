#include "Chapter6.h"

unsigned fact(unsigned n) {
  unsigned prev, res = 1;
  while (n > 1) {
    prev = res;
    res *= n;
    if (res / prev != n) throw std::overflow_error("Overflow!");
    --n;
  }

  return res;
}
