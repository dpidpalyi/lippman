#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

struct Person;

std::istream &read(std::istream &is, Person &obj);
std::ostream &print(std::ostream &os, const Person &obj);

struct Person {
  std::string name;
  std::string address;

  Person(const std::string &inp_name) : name(inp_name) {}
  Person(const std::string &inp_name, const std::string &inp_addr)
      : name(inp_name), address(inp_addr) {}
  Person(std::istream &is) { read(is, *this); }

  const std::string &ret_name() const { return name; }
  const std::string &ret_address() const { return address; }
};

#endif
