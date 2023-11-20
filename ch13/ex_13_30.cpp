#include <string>
#include <iostream>

class HasPtr {
	friend void swap(HasPtr&, HasPtr&);
	public:
		HasPtr(const std::string &s = std::string()):
			ps(new std::string(s)), i(0) { }
		HasPtr(const HasPtr &Orig): ps(new std::string(*Orig.ps)), i(Orig.i) { }
		HasPtr& operator=(const HasPtr &);
		~HasPtr() { delete ps; }
		std::string *ps;
	private:
		int i;
};

HasPtr& HasPtr::operator=(const HasPtr &rhs) {
	auto newp = new std::string(*rhs.ps);
	delete ps;
	ps = newp;
	i = rhs.i;
	return *this;
}

inline void swap(HasPtr &lhs, HasPtr &rhs) {
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}

int main() {
	HasPtr h1("Hello");
	HasPtr h2("Hi");
	std::cout << "h1 = " << *h1.ps << std::endl;
	std::cout << "h2 = " << *h2.ps << std::endl;

	swap(h1, h2);
	std::cout << "h1 = " << *h1.ps << std::endl;
	std::cout << "h2 = " << *h2.ps << std::endl;

	swap(h1, h1);
	std::cout << "h1 = " << *h1.ps << std::endl;
	std::cout << "h2 = " << *h2.ps << std::endl;

	return 0;
}
