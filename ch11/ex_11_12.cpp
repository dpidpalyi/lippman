#include <iostream>
#include <utility>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::pair;

int main() {
	vector<pair<string, int>> dict;
	string word;
	int num;
	while (cin >> word >> num)
		//dict.push_back({word, num});
		//dict.push_back(pair<string, int>(word, num));
		//dict.emplace_back(word, num); // Use Args for construct element
		dict.push_back(std::make_pair(word, num));

	for (const auto &wc : dict)
		cout << wc.first << ": " << wc.second << endl;

	return 0;
}
