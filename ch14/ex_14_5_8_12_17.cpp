#include <iostream>

class Vehicle {
	friend std::ostream &operator<<(std::ostream &os, const Vehicle &v);
	friend std::istream &operator>>(std::istream &is, Vehicle &v);
	friend bool operator==(const Vehicle &lhs, const Vehicle &rhs);
	friend bool operator!=(const Vehicle &lhs, const Vehicle &rhs);
	public:
		Vehicle(): manfctr(""), model(""), year(0), distance(0) {}
		Vehicle(const std::string &mfc, const std::string &mdl, unsigned y, unsigned d): manfctr(mfc), model(mdl), year(y), distance(d) {} Vehicle(std::istream &is) { is >> manfctr >> model >> year >> distance;
		}
	private:
		std::string manfctr;
		std::string model;
		unsigned year;
		unsigned distance;
};

std::istream &operator>>(std::istream &is, Vehicle &v);
std::ostream &operator<<(std::ostream &os, const Vehicle &v);
bool operator==(const Vehicle &v1, const Vehicle &v2);
bool operator!=(const Vehicle &v1, const Vehicle &v2);

std::ostream &operator<<(std::ostream &os, const Vehicle &v) {
	os << "Vehicle: " << v.manfctr << " " << v.model << ", Year: " << v.year << ", with " << v.distance << " km.";
	return os;
}

std::istream &operator>>(std::istream &is, Vehicle &v) {
	is >> v.manfctr >> v.model >> v.year >> v.distance;
	if (!is)
		v = Vehicle();
	return is;
}

bool operator==(const Vehicle &lhs, const Vehicle &rhs) {
	return lhs.manfctr == rhs.manfctr && lhs.model == rhs.model && lhs.year == rhs.year;
}

bool operator!=(const Vehicle &lhs, const Vehicle &rhs) {
	return !(lhs == rhs);
}

int main() {
	Vehicle v1("BMW", "320", 2023, 1000);
	Vehicle v2;
	std::cin >> v2;
	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;
	std::cout << (v1 == v2) << std::endl;
	std::cout << (v2 == v2) << std::endl;

	return 0;
}
