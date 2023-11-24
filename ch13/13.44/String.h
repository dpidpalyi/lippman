#ifndef STRING_H
#define STRING_H

class String {
	public:
		String(): elements(nullptr), first_free(nullptr), cap(nullptr) {}
		char *begin() { return elements; }
		char *end() { return first_free; }
		char *cbegin() const { return elements; }
		char *cend() const { return first_free; }
		std::size_t size() { return first_free - elements; }
		std::size_t capacity() { return cap - elements; }
	private:
		char *elements;
		char *first_free;
		char *cap;

		static std::allocator<char> alloc;
};

#endif
