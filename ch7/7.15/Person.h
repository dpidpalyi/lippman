#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

struct Person;

// nonmember Person interface functions
std::istream &read(std::istream &is, Person &obj);
std::ostream &print(std::ostream &os, const Person &obj);

struct Person {
  // constructors
  Person() : name(), address() {}
  Person(const std::string &nm) : name(nm) {}
  Person(const std::string &nm, const std::string &ad)
      : name(nm), address(ad) {}
  Person(std::istream &is) { read(is, *this); }
  // member functions
  const std::string &ret_name() const { return name; }
  const std::string &ret_address() const { return address; }

  // data member
  std::string name;
  std::string address;
};

#endif
