#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

struct Person {
  // member functions
  const std::string &ret_name() const { return name; }
  const std::string &ret_address() const { return address; }

  // data member
  std::string name;
  std::string address;
};

// nonmember Person interface functions
std::istream &read(std::istream &is, Person &obj);
std::ostream &print(std::ostream &os, const Person &obj);

#endif
