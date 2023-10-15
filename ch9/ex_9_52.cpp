#include <iostream>
#include <string>
#include <stack>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stack;

int main() {
	string s;
	cin >> s;
	stack<char> st;

	for (const auto &c : s) {
		if (c == '(')
			st.push(c);
		else {
			if (!st.empty() && st.top() == '(')
				st.pop();
			else {
				cout << "Wrong expression" << endl;
				return -1;
			}
		}
	}

	if (!st.empty()) {
		cout << "Wrong expression" << endl;
		return -1;
	}

	cout << "Right expression" << endl;
	return 0;
}
