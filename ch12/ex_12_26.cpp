#include <memory>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	std::size_t n;
	if (cin >> n) {
		std::allocator<string> alloc;
		auto const p = alloc.allocate(n);
		string s;
		auto q = p;
		while (cin >> s && q != p + n)
			alloc.construct(q++, s);
		const std::size_t size = q - p;
		for (std::size_t i = 0; i != size; ++i) {
			cout << p[i] << " ";
			alloc.destroy(--q);
		}
		alloc.deallocate(p, n);
	} else 
		cout << "Error!" << endl;

	return 0;
}
