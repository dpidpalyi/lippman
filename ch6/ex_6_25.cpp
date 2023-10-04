#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
	if (argc != 3) {
		std::cout << "Usage: " << argv[0] << " <str1> <str2>.\n";
		return -1;
	}
	
	++argv;
	while (*argv)
		cout << *(argv++) << " ";
	cout << endl;

	return 0;
}
