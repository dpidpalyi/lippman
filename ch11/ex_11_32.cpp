#include <iostream>
#include <map>
#include <string>

using std::multimap;
using std::string;
using std::cout;
using std::endl;

int main() {
	multimap<string, string> authors = {{"Pushkin", "Capitan's daughter"}, {"Lermontov", "The hero of our age"}, {"Tolstoy", "War and Peace"}, {"Pushkin", "Onegin"}};

	for (auto curr = authors.cbegin(), last = authors.cend(); curr != last;) {
		cout << curr->first << '\n';
		auto range = authors.equal_range(curr->first);
		while (range.first != range.second) {
			cout << '\t' << range.first->second << '\n';
			++range.first;
		}
		curr = range.second;
	}

	return 0;
}
