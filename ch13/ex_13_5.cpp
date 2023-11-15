class HasPtr {
	public:
		HasPtr(const std::string &s = std::string()):
			ps(new std::string(s)), i(0) { }
		HasPtr(const HasPtr &Orig): ps(new std::string(*Orig.ps)), i(Orig.i) { }
	private:
		std::string *ps;
		int i;
};
