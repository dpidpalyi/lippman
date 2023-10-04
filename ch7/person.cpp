#include "Person.h"

using std::istream;
using std::ostream;

istream &read(istream &is, Person &p) {
	is >> p.name >> p.address;
	return is;
}

ostream &print(ostream &os, const Person &p) {
	os << "Name: " << p.name << ", address: " << p.address;
	return os;
}
