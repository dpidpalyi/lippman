#include <iostream>
#include <string>
using std::string;

int main() {
	string s1 = "Hello world\n";
	auto len = s1.size();
	std::cout << len << std::endl;
	return 0;
}
