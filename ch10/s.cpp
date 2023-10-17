#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using std::endl;
using std::cout;
using std::string;
using std::vector;

int main() {
	vector<string> vs{"Hello", "world"};
	cout << std::accumulate(vs.cbegin(), vs.cend(), string());

	return 0;
}
