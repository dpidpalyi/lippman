#include <iostream>
#include <fstream>
#include <string>

class Match {
	public:
		Match(std::size_t f, std::size_t t) : from(f), to(t) {}
		bool operator()(const std::string &s) const {
			return s.size() > from && s.size() <= to;
		}
	private:
		std::size_t from;
		std::size_t to;
};

int main() {
	std::fstream in("input");
	std::string s;
	Match m(1, 9);
	std::size_t less = 0, more = 0;
	while (std::getline(in, s))
		if (m(s))
			++less;
		else
			++more;
	std::cout << less << " " << more << std::endl;
	return 0;
}
