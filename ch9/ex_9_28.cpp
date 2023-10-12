#include <iostream>
#include <string>
#include <forward_list>

using std::cout;
using std::endl;
using std::string;
using std::forward_list;

void foo(forward_list<string> &lst, const string &s1, const string &s2) {
	auto curr = lst.cbegin();
	auto prev = lst.cbefore_begin();
	//auto e = lst.cend(); DISASTER as follows 
	
	while (curr != lst.cend()) {
		if (*curr == s1) {
			lst.insert_after(curr, s2);
			return;
		} else {
			prev = curr;
			++curr;
		}
	}

	if (!lst.empty())
		lst.insert_after(prev, s2);
}

	

int main() {
	forward_list<string> lst{"Hello", "world!", "I'm happy!"};
	forward_list<string> lst1;
	forward_list<string> lst2{"Hello"};

	cout << "Before process, lst: ";
	for (const auto &e : lst) cout << e << " ";
	cout << endl;

	foo(lst, "world!", "INSERTED");
	cout << "After foo, lst: ";
	for (const auto &e : lst) cout << e << " ";
	cout << endl;

	cout << "Before foo, lst1: ";
	for (const auto &e : lst1) cout << e << " ";
	cout << endl;

	foo(lst1, "world!", "INSERTED");
	cout << "After foo, lst1: ";
	for (const auto &e : lst1) cout << e << " ";
	cout << endl;

	cout << "Before foo, lst2: ";
	for (const auto &e : lst2) cout << e << " ";
	cout << endl;

	foo(lst2, "Hello", "INSERTED");
	cout << "After foo, lst2: ";
	for (const auto &e : lst2) cout << e << " ";
	cout << endl;
}
