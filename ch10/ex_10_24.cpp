#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std::placeholders;
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::size_t;

bool check_size(const string &s, size_t sz) {
	return s.size() < sz;
}

int main() {
	vector<int> vi = {1, 2, 3, 4, 5, 6};
	auto f = std::find_if(vi.begin(), vi.end(), std::bind(check_size, "hell", _1));
	if (f != vi.end())
		cout << *f << endl;
	else
		cout << "Not found" << endl;

	return 0;
}
