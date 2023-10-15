#include <list>
#include <deque>
#include <iostream>

using std::list;
using std::deque;

int main() {
	list<deque<int>> lst;
	std::cout << lst.size() << std::endl;
	return 0;
}
