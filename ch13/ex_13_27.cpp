#include <string>
#include <iostream>

class HasPtr {
	public:
		HasPtr(const std::string &s = std::string()): ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
		HasPtr(const HasPtr &p): ps(p.ps), i(p.i), use(p.use) { ++*use; }
		HasPtr &operator=(const HasPtr&);
		~HasPtr();
		const std::string &get() { return *ps; }
	private:
		std::string *ps;
		int i;
		std::size_t *use;
};

HasPtr::~HasPtr() {
	if (--*use == 0) {
		delete ps;
		delete use;
	}
}

HasPtr &HasPtr::operator=(const HasPtr &rhs) {
	++*rhs.use;
	if (--*use == 0) {
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
}

int main() {
  HasPtr hp1 = std::string("World");
  HasPtr hp2 = hp1;
  HasPtr hp3;
  hp3 = hp1;

  std::cout << hp1.get() << std::endl;
  std::cout << hp2.get() << std::endl;
  std::cout << hp3.get() << std::endl;

  return 0;
}
