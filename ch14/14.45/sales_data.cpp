#include "Sales_data.h"

Sales_data &Sales_data::combine(const Sales_data &other) {
  units_sold += other.units_sold;
  revenue += other.revenue;

  return *this;
}

std::istream &read(std::istream &is, Sales_data &item) {
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;

  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
  os << item.bookNo << ' ' << item.units_sold << ' ' << item.revenue << ' '
     << item.avg_price();

  return os;
}

std::ostream &operator<<(std::ostream &os, const Sales_data &item) {
	os << item.bookNo << ' ' << item.units_sold << ' ' << item.revenue << ' ' << item.avg_price();
	return os;
}

std::istream &operator>>(std::istream &is, Sales_data &item) {
  double price;
  is >> item.bookNo >> item.units_sold >> price;
  if (is)
	  item.revenue = price * item.units_sold;
  else
	  item = Sales_data();

  return is;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs) {
	Sales_data sum = lhs;
	sum += rhs;
	return sum;
}

Sales_data &Sales_data::operator+=(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
} 


Sales_data &Sales_data::operator=(const std::string &s) {
	*this = Sales_data(s);
	return *this;
}
