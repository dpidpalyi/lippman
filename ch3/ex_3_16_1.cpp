#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	vector<int> v1;
	auto len1 = v1.size();
	cout << len1 << endl;
	for (auto it = v1.cbegin(); it != v1.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	vector<int> v2(10);
	auto len2 = v2.size();
	cout << len2 << endl;
	for (auto it = v2.cbegin(); it != v2.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	vector<int> v3(10, 42);
	auto len3 = v3.size();
	cout << len3 << endl;
	for (auto it = v3.cbegin(); it != v3.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	vector<int> v4{10};
	auto len4 = v4.size();
	cout << len4 << endl;
	for (auto it = v4.cbegin(); it != v4.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	vector<int> v5{10, 42};
	auto len5 = v5.size();
	cout << len5 << endl;
	for (auto it = v5.cbegin(); it != v5.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	vector<string> v6{10};
	auto len6 = v6.size();
	cout << len6 << endl;
	for (auto it = v6.cbegin(); it != v6.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	vector<string> v7{10, "hi"};
	auto len7 = v7.size();
	cout << len7 << endl;
	for (auto it = v7.cbegin(); it != v7.cend(); ++it)
		cout << *it << " ";
	cout << endl;
	return 0;
}

