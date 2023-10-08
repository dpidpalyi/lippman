class NoDefault {
	public:
		NoDefault(int i): i_(i) {}
	private:
		int i_;
};

class C {
	public:
		C(): nodef(0) {}
	private:
		NoDefault nodef;
};

int main() {
	C c;
	return 0;
}
