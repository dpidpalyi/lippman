#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::endl;
using std::vector;
using std::equal;

int main() {
	vector<const char *> vc1{"Hello", "world"};
	vector<const char *> vc2{"Hi", "world"};
	cout << equal(vc1.cbegin(), vc1.cend(), vc2.cbegin()) << endl;

	return 0;
}
