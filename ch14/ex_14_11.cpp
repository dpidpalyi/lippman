istream &operator>>(istream &in, Sales_data &s) {
	double price;
	in >> s.bookNo >> s.units_sold >> price;
	s.revenue = s.units_sold * price;
	return in;
}

// There is no error checking for status of the istream.
// If we gave the data in the previous exercise, all will be fine, except wrong data in item.
