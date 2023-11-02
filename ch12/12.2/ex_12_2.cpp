#include <iostream>
#include "StrBlob.h"

using std::cout;
using std::endl;

int main() {
	StrBlob sb{"Hello", "Hi", "Bye"};
	const StrBlob csb{"Hello", "Hi", "Bye"};

	cout << csb.front() << " " << csb.back() << endl;
	sb.back() = "Good afternoon";
	cout << sb.front() << " " << sb.back() << endl;

	return 0;
}
