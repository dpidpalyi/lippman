class HasPtr {
	public:
		HasPtr(const std::string &s = std::string()):
			ps(new std::string(s)), i(0) { }
		HasPtr(const HasPtr &Orig): ps(new std::string(*Orig.ps)), i(Orig.i) { }
		HasPtr &operator=(const HasPtr &);
	private:
		std::string *ps;
		int i;
};

HasPtr &HasPtr::operator=(const HasPtr &Orig) {
	auto newPtr = new string(*Orig.ps);
	delete ps;
	ps = newPtr;
	i = Orig.i;
	return *this;
}
