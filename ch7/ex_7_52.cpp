// We need to define revenue with price, with price * units_sold

//Sales_data item = {"978-0590353403", 25, 15.99};
Sales_data item = {"978-0590353403", 25, 25 * 15.99};

class Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
