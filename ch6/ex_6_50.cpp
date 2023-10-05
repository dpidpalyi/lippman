void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

f(2.56, 42)   // ambiguous
    f(42)     // f(int)
    f(42, 0)  // f(int, int)
    f(2.56, 3.14) f(double, double)
