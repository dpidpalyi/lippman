class HasPtr {
	public:
		HasPtr(const std::string &s = std::string()):
			ps(new std::string(s)), i(0) { }
		HasPtr(const HasPtr &Orig): ps(new std::string(*Orig.ps)), i(Orig.i) { }
		HasPtr& operator=(const HasPtr &);
		~HasPtr() { delete ps; }
	private:
		std::string *ps;
		int i;
};

HasPtr& HasPtr::operator=(const HasPtr &rhs) {
	auto newp = new string(*rhs.ps);
	delete ps;
	ps = newp;
	i = rhs.i;
	return *this;

