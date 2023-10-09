#include "Sales_data.h"
#include <fstream>

int main() {
	std::ifstream ifs;
  ifs.open("input.data");
  Sales_data total(ifs);  // variable to hold the running sum
  if (ifs) {              // read first transaction
    Sales_data trans;          // variable to hold data for the next transaction
    while (read(ifs, trans)) {      // read the remaining transactions
      if (total.isbn() == trans.isbn())  // check the isbns
        total.combine(trans);            // update the running total
      else {
        print(std::cout, total) << '\n';  // print the results
        total = trans;                    // process the next book
      }
    }
    print(std::cout, total) << '\n';  // print the last transaction
  } else {                            // there was no input
    std::cerr << "No data?!\n";       // notify the user
  }

  return 0;
}
