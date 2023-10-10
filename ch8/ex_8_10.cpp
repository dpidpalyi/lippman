#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;

int main(int argc, char *argv[]) {
  if (argc == 2) {
    std::ifstream input(argv[1]);
    if (!input) {
      std::cerr << "Bad input file!" << std::endl;
      return -1;
    }

    vector<string> svec;
    string buff;
    while (getline(input, buff)) svec.push_back(buff);

    for (const auto &line : svec) {
      std::istringstream iss(line);
      string word;
      while (iss >> word) std::cout << word << " ";
      std::cout << std::endl;
    }

  } else
    std::cerr << "Wrong arguments!" << std::endl;

  return 0;
}
