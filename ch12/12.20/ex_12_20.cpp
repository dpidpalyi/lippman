#include <iostream>
#include <string>
#include <fstream>
#include "StrBlob.h"
#include "StrBlobPtr.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

int main() {
	cout << "Enter file to read: ";
	string filename;
	if (cin >> filename) {
		std::ifstream in(filename);
		if (!in) {
			cerr << "Cannot open file: " << filename << endl;
		  return -1;
		}
		StrBlob sb;
		for (std::string line; std::getline(in, line); sb.push_back(line))
			;
		StrBlobPtr p = sb.begin();
		for (StrBlob::size_type pos = 0; pos != sb.size(); ++pos, p.inc())
			cout << pos + 1 << ":\t" << p.deref() << endl;

	} else
		cerr << "Wrong input file!" << endl;
}
