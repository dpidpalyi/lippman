#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  // ex1_21
  Sales_data data1, data2;
  unsigned totalCnt = 0;
  double price = 0, totalRevenue = 0;
  std::cin >> data1.bookNo >> data1.units_sold >> price;
  data1.revenue = data1.units_sold * price;
  std::cin >> data2.bookNo >> data2.units_sold >> price;
  data2.revenue = data2.units_sold * price;
  if (data1.bookNo == data2.bookNo) {
    totalCnt = data1.units_sold + data2.units_sold;
    totalRevenue = data1.revenue + data2.revenue;
    if (totalCnt != 0)
      std::cout << totalRevenue << std::endl;
    else
      std::cout << "(no sales)" << std::endl;
  } else {
    std::cerr << "Data must refer to the same ISBN" << std::endl;
  }
  // ex1_22
  if (std::cin >> data1.bookNo >> data1.units_sold >> price) {
    data1.revenue = data1.units_sold * price;
    totalRevenue = data1.revenue;
    while (std::cin >> data2.bookNo >> data2.units_sold >> price) {
      data2.revenue = data2.units_sold * price;
      if (data1.bookNo == data2.bookNo)
        totalRevenue += data2.revenue;
      else {
        std::cout << data1.bookNo << " " << totalRevenue << std::endl;
        data1.bookNo = data2.bookNo;
        totalRevenue = data2.revenue;
      }
    }
    std::cout << data1.bookNo << " " << totalRevenue << std::endl;
  } else
    std::cout << "wrong data!" << std::endl;
  return 0;
}
