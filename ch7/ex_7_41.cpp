class Vehicle {
	public:
		Vehicle(const std::string &mfc, const std::string &mdl, unsigned y, unsigned d): manfctr(mfc), model(mdl), year(y), distance(d) {}
		Vehicle(): Vehicle("", "", 0, 0) {}
		Vehicle(std::istream &is): Vehicle("", "", 0, 0) {
			is >> manfctr >> model >> year >> distance;
		}
	private:
		std::string manfctr;
		std::string model;
		unsigned year = 0;
		unsigned distance = 0;
};
