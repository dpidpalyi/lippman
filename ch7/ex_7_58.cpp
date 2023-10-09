#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
//
// example.h
class Example {
	public:
		//static double rate = 6.5; // need to be constexpr
		static constexpr double rate = 6.5;
		static const int vecSize = 20;
		//static vector<double> vec(vecSize); // can't initialize here with parentesis
		static vector<double> vec;
};

// example.c
//#include "example.h"
//double Example::rate;
//vector<double> Example::vec;
constexpr double Example::rate;
vector<double> Example::vec(vecSize);

int main() {
	Example dvec;
	for (auto e : dvec.vec)
		cout << e << " ";
	cout << endl;

	return 0;
}
