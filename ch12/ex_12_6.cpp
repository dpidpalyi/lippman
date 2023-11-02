#include <iostream>
#include <vector>
#include <new>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<int> *foo() {
	return new vector<int>;
}

void input(vector<int> *vi) {
	int n;
	while (cin >> n)
		vi->push_back(n);
}

void output(vector<int> *vi) {
	for (const auto e : *vi)
		cout << e << " ";
	cout << endl;
}

int main() {
	auto vi = foo();
	input(vi);
	output(vi);
	delete vi;
	vi = nullptr;

	return 0;
}
