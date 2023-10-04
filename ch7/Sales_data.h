#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data;

std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

class Sales_data {
	//Sales_data() = default;
	public:
		Sales_data() : bookNo(), units_sold(0), revenue(0.0) {}
		Sales_data(const std::string &s) : bookNo(s) {}
		Sales_data(const std::string &s, unsigned n, double p) :
			bookNo(s), units_sold(n), revenue(n * p) {}
		Sales_data(std::istream &is) { read(is, *this); }

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

#endif
