#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

class HasPtr {
	friend void swap(HasPtr&, HasPtr&);
	public:
		HasPtr(const std::string &s = std::string()):
			ps(new std::string(s)), i(0) { }
		HasPtr(const HasPtr &Orig): ps(new std::string(*Orig.ps)), i(Orig.i) { }
		HasPtr& operator=(const HasPtr &);
		bool operator<(const HasPtr &);
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

bool HasPtr::operator<(const HasPtr &rhs) {
	return *ps < *rhs.ps;
}

inline void swap(HasPtr &lhs, HasPtr &rhs) {
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}

int main() {
	std::vector<HasPtr> v;
	v.push_back(HasPtr("Hello"));
	v.push_back(HasPtr("World"));
	v.push_back(HasPtr("ABC"));
	v.push_back(HasPtr("MNK"));

	std::sort(v.begin(), v.end());

	for (const auto &h : v)
		std::cout << *h.ps << " ";
	std::cout << std::endl;

	return 0;
}
