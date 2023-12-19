#include <fstream>

#include "Sales_data.h"

int main(int argc, char *argv[]) {
	Sales_data s;
	s = std::string("HELLO");
	std::cout << s << std::endl;
  if (argc == 3) {
    std::ifstream ifs(argv[1]);
    std::ofstream ofs(argv[2], std::ofstream::out);
    Sales_data total(ifs);  // variable to hold the running sum
    if (ifs) {              // read first transaction
      Sales_data trans;     // variable to hold data for the next transaction
      while (ifs >> trans) {           // read the remaining transactions
        if (total.isbn() == trans.isbn())  // check the isbns
          total += trans;            // update the running total
        else {
	  ofs << total << '\n';
          total = trans;              // process the next book
        }
      }
      ofs << total << '\n';
    } else                         // there was no input
      std::cerr << "No data?!\n";  // notify the user
  } else
    std::cerr << "Wrong command arguments!\n";

  return 0;
}
