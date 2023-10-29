#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::unordered_map;
using std::string;

int main() {
	unordered_map<string, int> word_count;
	string word;
	vector<string> exclude = {"the", "but", "and", "or", "an", "a"};
	while (cin >> word) {
		for (auto &c : word) c = std::tolower(c);
		word.erase(std::remove_if(word.begin(), word.end(), [](unsigned char c){ return std::ispunct(c); }), word.end());
		if (std::find(exclude.cbegin(), exclude.cend(), word) == exclude.end())
			++word_count[word];
	}

	for (const auto &w : word_count)
		cout << w.first << ": " << w.second << endl;

	return 0;
}
