#include <iostream>

template <typename T, unsigned N>
T* begin_(T (&arr)[N]) {
	return arr;
}

template <typename T, unsigned N>
T* end_(T (&arr)[N]) {
	return arr + N;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	for (auto it = begin_(arr); it != end_(arr); ++it)
		std::cout << *it << std::endl;
	return 0;
}
