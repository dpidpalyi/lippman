#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cerr;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::ofstream;
using std::ostringstream;
using std::string;
using std::vector;

struct PersonInfo {
  string name;
  vector<string> phones;
};

inline bool valid(const string &s) { return std::isdigit(s[0]); }

inline string format(const string &s) {
  return s.substr(0, 3) + "-" + s.substr(3, 3) + "-" + s.substr(6);
}

int main(int argc, char **argv) {
  if (argc == 3) {
    string line, word;
    vector<PersonInfo> people;
    ifstream input(argv[1]);
    ofstream os(argv[2]);

    while (getline(input, line)) {
      PersonInfo info;
      istringstream record(line);
      record >> info.name;
      while (record >> word) info.phones.push_back(word);
      people.push_back(info);
    }

    for (const auto &entry : people) {
      ostringstream formatted, badNums;
      for (const auto &nums : entry.phones) {
        if (!valid(nums))
          badNums << nums << " ";
        else
          formatted << format(nums) << " ";
      }
      if (badNums.str().empty())
        os << entry.name << " " << formatted.str() << endl;
      else
        cerr << "input error: " << entry.name << " invalid number(s) "
             << badNums.str() << endl;
    }
  } else
    cerr << "Wrong arguments!" << endl;

  return 0;
}
