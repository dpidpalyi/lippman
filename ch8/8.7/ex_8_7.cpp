#include <fstream>

#include "Sales_data.h"

int main(int argc, char *argv[]) {
  if (argc == 3) {
    std::ifstream ifs(argv[1]);
    std::ofstream ofs(argv[2]);
    Sales_data total(ifs);  // variable to hold the running sum
    if (ifs) {              // read first transaction
      Sales_data trans;     // variable to hold data for the next transaction
      while (read(ifs, trans)) {           // read the remaining transactions
        if (total.isbn() == trans.isbn())  // check the isbns
          total.combine(trans);            // update the running total
        else {
          print(ofs, total) << '\n';  // print the results
          total = trans;              // process the next book
        }
      }
      print(ofs, total) << '\n';   // print the last transaction
    } else                         // there was no input
      std::cerr << "No data?!\n";  // notify the user
  } else
    std::cerr << "Wrong command arguments!\n";

  return 0;
}
