#include <iostream>

class Vehicle {
	friend std::ostream &operator<<(std::ostream &os, const Vehicle &v);
	public:
		Vehicle(): manfctr(""), model(""), year(0), distance(0) {}
		Vehicle(const std::string &mfc, const std::string &mdl, unsigned y, unsigned d): manfctr(mfc), model(mdl), year(y), distance(d) {}
		Vehicle(std::istream &is) {
			is >> manfctr >> model >> year >> distance;
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

int main() {
	Vehicle v("BMW", "320", 2023, 1000);
	std::cout << v << std::endl;

	return 0;
}
