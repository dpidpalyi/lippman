#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using std::string;

struct Person {
	string name;
	string address;
	// member functions
	const string &get_name() const { return name; }
	const string &get_address() const { return name; }
};

std::istream &read(std::istream &is, Person &p);
std::ostream &print(std::ostream &is, const Person &p);

#endif
