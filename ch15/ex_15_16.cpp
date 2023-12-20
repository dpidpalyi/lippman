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
			std::cout << "Book:" << bookNo << std::endl;
			std::cout << "Price:" << price << std::endl;
		}
		virtual ~Quote() = default;
	private:
		std::string bookNo;
	protected:
		double price = 0.0;
};

class Disc_quote : public Quote {
	public:
		Disc_quote() = default;
		Disc_quote(const std::string &book, double p, std::size_t qty, double disc) : Quote(book, p), quantity(qty), discount(disc) {}
		double net_price(std::size_t) const = 0; // pure virtual
	protected:
		std::size_t quantity = 0;
		double discount = 0.0;
};

class Bulk_quote : public Disc_quote {
	public:
		Bulk_quote() = default;
		Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) : Disc_quote(book, p, qty, disc) {}
		double net_price(std::size_t) const override;
		void debug() const override {
			Quote::debug();
			std::cout << "Disc.qty:" << quantity << std::endl;
			std::cout << "Discount:" << discount << std::endl;
		}
};

class Limit_quote : public Disc_quote {
	public:
		Limit_quote() = default;
		Limit_quote(const std::string &book, double p, std::size_t qty, double disc, std::size_t lim) : Disc_quote(book, p, qty, disc), limit(lim) {}
		double net_price(std::size_t) const override;
		void debug() const override {
			Quote::debug();
			std::cout << "Disc.qty:" << quantity << std::endl;
			std::cout << "Discount:" << discount << std::endl;
			std::cout << "Limit:" << limit << std::endl;
		}
	private:
		std::size_t limit = 0;
};

double Limit_quote::net_price(std::size_t cnt) const {
	if (cnt >= quantity) {
		if (cnt > limit)
			return limit * (1 - discount) * price + (cnt - limit) * price;
		return cnt * (1 - discount) * price;
	} else
		return cnt * price;
}

double Bulk_quote::net_price(std::size_t cnt) const {
	if (cnt >= quantity)
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
	Quote q("Quote", 2.5);
	Bulk_quote b("Bulk", 2.5, 4, 0.5);
	Limit_quote l("Limit", 2.5, 4, 0.5, 8);
	print_total(std::cout, q, 10);
	print_total(std::cout, b, 10);
	print_total(std::cout, l, 10);
	q.debug();
	b.debug();
	l.debug();
	return 0;
}
