#ifndef STRVEC
#define STRVEC

#include <string>
#include <memory>
#include <cstdlib>
#include <algorithm>

class StrVec {
	public:
		StrVec(): // the allocator member is default initialized
			elements(nullptr), first_free(nullptr), cap(nullptr) {}
		StrVec(const StrVec&); // copy constructor
		StrVec(std::initializer_list<std::string>);
		StrVec &operator=(const StrVec&); // copy assignment
		StrVec(StrVec&&) noexcept; // move constructor
		StrVec &operator=(StrVec&&) noexcept; // move assignment
		~StrVec(); // destructor

		void push_back(const std::string&); // copy the element
		std::size_t size() const { return first_free - elements; }
		std::size_t capacity() const { return cap - elements; }
		std::string *begin() const { return elements; }
		std::string *end() const { return first_free; }

		void reserve(std::size_t);
		void resize(std::size_t, const std::string&);

	private:
		// utilities used by the copy constructor, assignment operator, and destructor
		std::pair<std::string*, std::string*> alloc_n_copy
			(const std::string*, const std::string*);
		void chk_n_alloc() // used by functions that add elements to a StrVec
			{ if (size() == capacity()) reallocate(); }
		void free(); // destroy the elements and free the space
		void reallocate(); // get more space and copy the existing elements

		std::string *elements; // pointer to the first element in the array
		std::string *first_free; // pointer to the first free element in the array
		std::string *cap; // pointer to one past the end of the array
		static std::allocator<std::string> alloc; // allocates the elements
};

#endif
