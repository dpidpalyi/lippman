#include <iostream>
#include <functional>
#include <map>
#include <string>

int add(int i, int j) { return i + j; }

struct divide {
	int operator()(int i, int j) { return i / j; }
};

int main() {
	auto mod = [](int i, int j) { return i % j; };
	std::map<std::string, std::function<int(int, int)>> m = {
		{"+", add},
		{"-", std::minus<int>()},
		{"/", divide()},
		{"*", [](int i, int j) { return i * j; }},
		{"%", mod}};
	int lhs, rhs;
	std::string op;
	std::cout << "Enter math expression:" << std::endl;
	while (std::cin >> lhs >> op >> rhs) {
		std::cout << m[op](lhs, rhs) << std::endl;
	        std::cout << "Enter math expression:" << std::endl;
	}
	return 0;
}
