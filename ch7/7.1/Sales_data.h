#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data {
	//Sales_data() = default;
	public:
		// new members: operations on Sales_data objects
		std::string isbn() const { return bookNo; }
		Sales_data &combine(const Sales_data &other);
		double avg_price() const;

		// data members
		std::string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
};

// nonmember Sales_data interface functions
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);

#endif
