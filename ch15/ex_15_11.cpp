#include <string>
#include <iostream>

class Quote {
	public:
		Quote() = default;
		Quote(const std::string &book, double sales_price) : 
			bookNo(book), price(sales_price) {}
		std::string isbn() const { return bookNo; }
		virtual double net_price(std::size_t n) const { return n * price; }
		virtual void debug() const {
			std::cout << "Book: " << bookNo << std::endl;
			std::cout << "Price: " << price << std::endl;
		}
		virtual ~Quote() = default;
	private:
		std::string bookNo;
	protected:
		double price = 0.0;
};

class Bulk_quote : public Quote {
	public:
		Bulk_quote() = default;
		Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) : Quote(book, p), min_qty(qty), discount(disc) {}
		double net_price(std::size_t) const override;
		void debug() const override {
			Quote::debug();
			std::cout << "Disc.qty: " << min_qty << std::endl;
			std::cout << "Discount: " << discount << std::endl;
		}
	private:
		std::size_t min_qty = 0;
		double discount = 0.0;
};

double Bulk_quote::net_price(std::size_t cnt) const {
	if (cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}

double print_total(std::ostream &os, const Quote &item, std::size_t n) {
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
	return ret;
}

int main() {
	Quote q("First", 2.5);
	Bulk_quote b("Second", 2.5, 4, 0.1);
	print_total(std::cout, q, 4);
	print_total(std::cout, b, 4);
	q.debug();
	b.debug();
	return 0;
}
