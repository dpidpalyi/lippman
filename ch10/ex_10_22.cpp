#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

using namespace std::placeholders;

string make_plural(int n, const string &w, const string &suffix) {
	return (!n || n > 1) ? w + suffix : w;
}

bool check_size(const string &s, size_t sz) {
	return s.size() <= sz;
}

void elimDups(vector<string> &vs) {
	sort(vs.begin(), vs.end());
	auto end_unique = unique(vs.begin(), vs.end());

	vs.erase(end_unique, vs.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
	elimDups(words);
	std::stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() > b.size(); } );
	auto wc = std::find_if(words.begin(), words.end(), std::bind(check_size, _1, sz));
	auto count = std::count_if(words.cbegin(), words.cend(),  std::bind(check_size, _1, sz));
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or less" << endl;
	std::for_each(wc, words.end(), [](const string &s) { cout << s << " "; });
	cout << endl;
}

int main() {
	vector<string> words;
	string w;
	while (cin >> w)
		words.push_back(w);
	biggies(words, 6);

	return 0;
}
