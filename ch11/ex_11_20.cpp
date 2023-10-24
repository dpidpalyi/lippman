#include <iostream>
#include <map>
#include <set>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::set;
using std::size_t;

// With ++word_count[word] is easier and cleaner to understand
int main() {
	map<string, size_t> word_count;
	string word;
	while (cin >> word) {
		auto ret = word_count.insert({word, 1});
		if (!ret.second)
			++ret.first->second;
	}

	for (const auto &w : word_count)
		cout << w.first << " occure " << w.second
			<< ((w.second > 1) ? " times" : " time") << endl;

	return 0;
}
