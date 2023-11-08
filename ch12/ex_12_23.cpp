#include <iostream>
#include <cstring>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
	char c1[] = "Hello";
	char c2[] = " world!";
	char *cp = new char[std::strlen(c1) + std::strlen(c2) + 1];
	std::size_t i = 0;
	for (std::size_t j = 0; j != std::strlen(c1); ++j, ++i)
		cp[i] = c1[j];
	for (std::size_t j = 0; j != std::strlen(c2); ++j, ++i)
		cp[i] = c2[j];
	cp[i] = '\0';

	cout << cp << endl;

	delete[] cp;

	string s1 = "Hello";
	string s2 = " world!";
	string s3 = s1 + s2;

	cout << s3 << endl;

	return 0;
}
