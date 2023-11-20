#include <iostream>
#include <string>
#include <cstdlib>

class Employee {
	public:
		Employee(): id(++eid) {}
		explicit Employee(const std::string &s): name(s), id(++eid) {}
		Employee(const Employee& Orig): name(Orig.name), id(++eid) {}
		Employee &operator=(const Employee& Orig) { name = Orig.name; return *this; }
		std::size_t getID() const { return id; }
		std::string name;
	private:
		std::size_t id;
		static std::size_t eid;
};

std::size_t Employee::eid = 0;

int main() {
	Employee e("Hello");
	std::cout << e.name << " " << e.getID() << std::endl;
	Employee e2(e);
	std::cout << e2.name << " " << e2.getID() << std::endl;
	Employee e3("Hi");
	std::cout << e3.name << " " << e3.getID() << std::endl;
	e3 = e2;
	std::cout << e3.name << " " << e3.getID() << std::endl;

	return 0;
}
