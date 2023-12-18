#include <iostream>
#include <vector>
#include <string>

class ReadString {
	public:
		std::string operator()(std::istream &is = std::cin) const {
			std::string in;
			std::getline(is, in);
			return in;
		}
};

int main() {
	ReadString rs;
	std::string s;
	std::vector<std::string> v;
	while (!(s = rs()).empty())
		v.push_back(s);

	for (const auto w : v)
		std::cout << w << " ";
	return 0;
}
