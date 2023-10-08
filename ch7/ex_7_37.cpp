class Sales_data {
	public:
		Sales_data(std::string s = ""): bookNo(s) {}
		Sales_data(std::string s, unsigned cnt, double rev): bookNo(s), units_sold(cnt), revenue(rev * cnt) {}
		Sales_data(std::istream &is) {read(is, *this); }
};

Sales_data first_item(cin);		  // init with istream constructor
					  // data members from stdin

int main() {
	Sales_data next;		  // default constructor, s = ""
					  // etc members = 0;
	Sales_data last("9-999-99999-9"); // default constructor, s = "9..."
					  // etc members = 0;
}
