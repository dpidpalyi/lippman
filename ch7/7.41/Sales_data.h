#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data {
  // friend declarations for nonmember Sales_data operations added
  friend std::istream &read(std::istream &is, Sales_data &item);
  friend std::ostream &print(std::ostream &os, const Sales_data &item);
  friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

 public:
  // member constructors
  Sales_data(const std::string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(n * p) { std::cout << "Main constructor" << std::endl; }
  Sales_data(): Sales_data("", 0, 0) { std::cout << "Default constructor" << std::endl; }
  Sales_data(const std::string &s): Sales_data(s, 0, 0) { std::cout << "String constructor" << std::endl; }
  Sales_data(std::istream &is): Sales_data() {
	  std::cout << "istream constructor" << std::endl;
	  read(is, *this);
  }

  // member functions
  std::string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &other);

 private:
  double avg_price() const;

  // member data
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

// declarations for nonmember parts of the Sales_data interface
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

inline double Sales_data::avg_price() const {
  if (units_sold != 0)
    return revenue / units_sold;
  else
    return 0;
}

#endif
