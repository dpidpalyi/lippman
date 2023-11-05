#include <iostream>
#include <vector>
#include <memory>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::shared_ptr;

shared_ptr<vector<int>> foo() {
	return std::make_shared<vector<int>>();
}

void input(shared_ptr<vector<int>> vi) {
	int n;
	while (cin >> n)
		vi->push_back(n);
}

void output(shared_ptr<vector<int>> vi) {
	for (const auto e : *vi)
		cout << e << " ";
	cout << endl;
}

int main() {
	auto vi = foo();
	input(vi);
	output(vi);

	return 0;
}
