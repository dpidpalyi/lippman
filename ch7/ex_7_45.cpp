#include <vector>

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
	std::vector<NoDefault> nvec; // no error, because C have default constructor
	return 0;
}
