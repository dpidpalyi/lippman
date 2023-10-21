#include <iostream>
#include <map>
#include <set>
#include <string>
#include <cstdlib>
#include <cctype>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::set;
using std::size_t;

int main() {
	map<string, size_t> word_count;
	set<string> exclude = {"the", "but", "and", "or", "an", "a"};

	string word;
	while (cin >> word) {
		for (auto &c : word) c = tolower(c);
		word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
		if (exclude.find(word) == exclude.end())
			++word_count[word];
			}

	for (const auto &w : word_count)
		cout << w.first << " occure " << w.second
			<< ((w.second > 1) ? " times" : " time") << endl;

	return 0;
}
