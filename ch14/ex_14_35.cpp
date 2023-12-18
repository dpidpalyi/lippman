#include <iostream>
#include <string>

class ReadString {
	public:
		ReadString(std::istream &i = std::cin): is(i) {}
		std::string operator()() const {
			std::string in;
			std::getline(is, in);
			return in;
		}
	private:
		std::istream &is;
};

int main() {
	ReadString rs;
	std::string s = rs();
	std::cout << s << std::endl;
	return 0;
}
