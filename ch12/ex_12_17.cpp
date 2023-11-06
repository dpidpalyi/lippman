#include <memory>

int main() {
	int ix = 1024, *pi = &ix, *pi2 = new int(2048);
	typedef std::unique_ptr<int> IntP;

	// (a) illegal, can't initialize like this
	//IntP p0(ix);

	// (b) illegal, pi did not allocate dynamically
	//IntP p1(pi);

	// (c) legal
	IntP p2(pi2);

	// (d) illegal, &ix did not allocate dynamically
	//IntP p3(&ix);

	// (e) legal
	IntP p4(new int(2048));

	// (f) legal, but it will be an double free error
	IntP p5(p2.get());

	return 0;
}
