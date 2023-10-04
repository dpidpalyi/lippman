#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	vector<vector<int>> ivec;
	//vector<string> svec = ivec; // error
	vector<string> svec(10, "null");
	return 0;
}
