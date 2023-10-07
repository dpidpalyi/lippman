#include "Screen.h"

int main() {
  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0).set('#').display(std::cout);
  std::cout << std::endl;
  myScreen.display(std::cout);
  std::cout << std::endl << "=================================" << std::endl;
  Window_mgr myWindow;
  myWindow.screens[0].move(4, 0).set('$').display(std::cout);
  std::cout << std::endl << "=================================" << std::endl;
  myWindow.clear(0);
  myWindow.screens[0].display(std::cout);
  std::cout << std::endl;

  return 0;
}
