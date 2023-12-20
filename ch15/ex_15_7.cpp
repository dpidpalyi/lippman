#include <string>
#include <iostream>

class Quote {
	public:
		Quote() = default;
		Quote(const std::string &book, double sales_price) : 
			bookNo(book), price(sales_price) {}
		std::string isbn() const { return bookNo; }
		virtual double net_price(std::size_t n) const { return n * price; }
		virtual ~Quote() = default;
	private:
		std::string bookNo;
	protected:
		double price = 0.0;
};

class Limit_quote : public Quote {
	public:
		Limit_quote() = default;
		Limit_quote(const std::string &book, double p, std::size_t qty, std::size_t lim, double disc) : Quote(book, p), min_qty(qty), limit(lim), discount(disc) {}
		double net_price(std::size_t) const override;
	private:
		std::size_t min_qty = 0;
		std::size_t limit = 0;
		double discount = 0.0;
};

double Limit_quote::net_price(std::size_t cnt) const {
	if (cnt >= min_qty) {
		if (cnt > limit)
			return limit * (1 - discount) + (cnt - limit) * price;
		return cnt * (1 - discount) * price;
	} else
		return cnt * price;
}

double print_total(std::ostream &os, const Quote &item, std::size_t n) {
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
	return ret;
}

int main() {
	Quote q("First", 2.5);
	Limit_quote b("Second", 1, 4, 10, 0.5);
	print_total(std::cout, q, 4);
	print_total(std::cout, b, 20);
	return 0;
}
