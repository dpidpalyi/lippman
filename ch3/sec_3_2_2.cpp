#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main() {
	string s("Hello World!!!");
	decltype(s.size()) punct_cnt = 0;
	for (auto c : s)
		if (std::ispunct(c))
			++punct_cnt;
	cout << punct_cnt << " punctuation characters in " << s << endl;
	return 0;
}
