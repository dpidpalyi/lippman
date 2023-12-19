struct LongDouble {
	LongDouble(double = 0.0);
	operator double();
	operator float();
};

LongDouble ldObj;
int ex1 = ldObj;   // error, operator double() or operator float();
float ex2 = ldObj; // ok, operator float();
