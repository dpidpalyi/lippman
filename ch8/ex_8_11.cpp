#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;

struct PersonInfo {
  string name;
  vector<string> phones;
};

int main() {
  string line, word;
  vector<PersonInfo> people;
  std::istringstream record;
  while (getline(std::cin, line)) {
    PersonInfo info;
    record.clear();
    record.str(line);
    record >> info.name;
    while (record >> word) info.phones.push_back(word);
    people.push_back(info);
  }

  for (const auto &person : people) {
    std::cout << person.name << ": ";
    for (const auto &number : person.phones) std::cout << number << " ";
    std::cout << std::endl;
  }

  return 0;
}
