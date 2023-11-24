#ifndef STRING_H
#define STRING_H

#include <memory>
#include <cstdlib>

class String {
	public:
		String(): elements(nullptr), first_free(nullptr), cap(nullptr) {}
		String(const char *);
		String(const String&);
		String& operator=(const String&);
		~String() { free(); }

		void push_back(char);
		void pop_back();

		char *begin() { return elements; }
		char *end() { return first_free; }
		const char *cbegin() const { return elements; }
		const char *cend() const { return first_free; }

		bool empty() { return cbegin() == cend(); }
		std::size_t size() { return first_free - elements; }
		std::size_t capacity() { return cap - elements; }

		void reserve(std::size_t);
		void resize(std::size_t, char);
	private:
		char *elements;
		char *first_free;
		char *cap;

		void free();
		void reallocate();
		std::pair<char*, char*> alloc_n_copy(const char*, const char*);
		static std::allocator<char> alloc;
};

#endif
