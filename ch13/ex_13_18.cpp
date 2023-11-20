#include <iostream>
#include <string>
#include <cstdlib>

class Employee {
	public:
		Employee(): id(++eid) {}
		explicit Employee(const std::string &s): name(s), id(++eid) {}
		std::string name;
	private:
		std::size_t id;
		static std::size_t eid;
};

std::size_t Employee::eid = 0;

int main() {
	Employee e("Hello");
	std::cout << e.name << std::endl;

	return 0;
}
