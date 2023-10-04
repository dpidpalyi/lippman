#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;
using std::cin;

int main() {
	try {
		throw std::runtime_error("OMG!\n");
	} catch (std::runtime_error err) {
		cout << err.what();
	}
	return 0;
}
