#include "Person.h"

std::istream &read(std::istream &is, Person &obj) {
	is >> obj.name >> obj.address;
	
	return is;
}

std::ostream &print(std::ostream &os, const Person &obj) {
	os << "Name: " << obj.name << ", Address: " <<  obj.address;
	
	return os;
}
