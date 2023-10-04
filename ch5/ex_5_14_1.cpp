#include <iostream>
#include <string>

int main() {
  std::string maxName;
  unsigned maxRepeat = 0;

  std::string currName;
  std::cin >> currName;
  unsigned currRepeat = 1;
  while (std::cin) {
    std::string input;
    while (std::cin >> input && input == currName) ++currRepeat;
    if (currRepeat > maxRepeat) {
      maxName = currName;
      maxRepeat = currRepeat;
    }
    currName = input;
    currRepeat = 1;
  }

  if (maxRepeat < 2)
    std::cout << "No words were repeated." << std::endl;
  else
    std::cout << "The word " << maxName << " occurred " << maxRepeat
              << " times." << std::endl;

  return 0;
}
