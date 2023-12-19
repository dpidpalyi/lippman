void calc(int);
void calc(LongDouble);
double dval;
calc(dval);

/*
best viable function: void calc(int). cause class-type conversion is the lowest ranked.

review the order:

    exact match
    const conversion
    promotion
    arithmetic or pointer conversion
    class-type conversion
*/
