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

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}
