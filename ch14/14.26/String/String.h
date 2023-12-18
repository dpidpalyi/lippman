#ifndef STRING_H
#define STRING_H

#include <memory>
#include <cstdlib>
#include <iostream>

class String {
	friend bool operator==(const String &lhs, const String &rhs);
	friend bool operator!=(const String &lhs, const String &rhs);
	friend bool operator<(const String &lhs, const String &rhs);
	public:
		String(): elements(nullptr), first_free(nullptr), cap(nullptr) {}
		String(const char *);
		String(const String&);
		String& operator=(const String&);
		String(String&&) noexcept;
		String& operator=(String&&) noexcept;
		char &operator[](std::size_t n) { return elements[n]; }
		const char &operator[](std::size_t n) const { return elements[n]; }

		~String() { free(); }

		void push_back(char);
		void pop_back();

		char *begin() { return elements; }
		char *end() { return first_free; }
		const char *cbegin() const { return elements; }
		const char *cend() const { return first_free; }

		bool empty() { return cbegin() == cend(); }
		std::size_t size() const { return first_free - elements; }
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


bool operator==(const String &lhs, const String &rhs);
bool operator!=(const String &lhs, const String &rhs);
bool operator<(const String &lhs, const String &rhs);

#endif
