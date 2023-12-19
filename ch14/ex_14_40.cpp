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

struct Shorter {
  bool operator()(const std::string &s1, const std::string &s2) const {
    return s1.size() < s2.size();
  }
};

struct Longer {
  Longer(size_t size) : sz(size) { }
  bool operator()(const std::string &s) const { return s.size() >= sz; }

private:
  size_t sz;
};

struct PrintString {
  PrintString(std::ostream &o = std::cout, char d = ' ')
      : os(o), delimiter(d) { }
  void operator()(const std::string &s) const { os << s << delimiter; }

private:
  std::ostream &os;
  char delimiter;
};

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
	std::stable_sort(words.begin(), words.end(), Shorter());
	auto wc = std::partition(words.begin(), words.end(), Longer(sz));
	auto count = wc - words.begin();
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	std::for_each(words.begin(), wc, PrintString());
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
