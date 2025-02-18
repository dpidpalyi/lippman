class Vehicle {
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
