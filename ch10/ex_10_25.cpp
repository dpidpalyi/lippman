#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std::placeholders;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

bool check_size(const string &s, size_t sz) {
	return s.size() >= sz;
}

string make_plural(int n, const string &w, const string &suffix) {
	return (!n || n > 1) ? w + suffix : w;
}

void elimDups(vector<string> &vs) {
	sort(vs.begin(), vs.end());
	auto end_unique = unique(vs.begin(), vs.end());

	vs.erase(end_unique, vs.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
	elimDups(words);
	std::stable_sort(words.begin(), words.end(), bind(check_size, _1, sz));
	auto wc = std::partition(words.begin(), words.end(), bind(check_size, _1, sz));
	auto count = wc - words.begin();
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	std::for_each(words.begin(), wc, [](const string &s) { cout << s << " "; });
	cout << endl;
}

int main() {
	vector<string> words;
	string w;
	while (cin >> w)
		words.push_back(w);
	biggies(words, 5);

	return 0;
}
