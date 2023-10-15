#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
	string numbers("0123456789");
	string alpha("abcdefghijklnmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVXYZ");
	string s("ab2c3d7R4E6");
	decltype(s.size()) pos = 0;
	while ((pos = s.find_first_not_of(alpha, pos)) != string::npos) {
		cout << "found number: " << s[pos] << ", with index: "
			<< pos << endl;
		++pos;
	}

	pos = 0;
	while ((pos = s.find_first_not_of(numbers, pos)) != string::npos) {
		cout << "found alphabet: " << s[pos] << ", with index: "
			<< pos << endl;
		++pos;
	}

	return 0;
}
