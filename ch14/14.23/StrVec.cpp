#include "StrVec.h"
#include <algorithm>

std::allocator<std::string> StrVec::alloc;

StrVec::StrVec(std::initializer_list<std::string> lst) {
	auto newdata = alloc_n_copy(lst.begin(), lst.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

void StrVec::push_back(const std::string& s) {
	chk_n_alloc(); // ensure that there is room for another element
	// construct a copy of s in the element to which first_free points
	alloc.construct(first_free++, s);
}

std::pair<std::string*, std::string*> StrVec::alloc_n_copy(const std::string *b, const std::string *e) {
	// allocate space to hold as many elements as are in the range
	auto data = alloc.allocate(e - b);
	// initialize and return a pair constructed from data and
	// the value returned by uninitialized_copy
	return {data, uninitialized_copy(b, e, data)};
}

void StrVec::free() {
	// may not pass deallocate a 0 pointer; if elements is 0, there's no work to do
	if (elements) {
		for_each(elements, first_free, [](std::string &s){ alloc.destroy(&s); });
		alloc.deallocate(elements, cap - elements);
	}
}

StrVec::~StrVec() {
	free();
}

StrVec::StrVec(const StrVec &s) {
	// call alloc_n_copy to allocate exactly as many elements as in s
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec &StrVec::operator=(const StrVec &rhs) {
	// call alloc_n_copy to allocate exactly as many elements as in rhs
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

StrVec::StrVec(StrVec &&s) noexcept : elements(s.elements), first_free(s.first_free), cap(s.cap) {
	s.elements = s.first_free = s.cap = nullptr;
}

StrVec& StrVec::operator=(StrVec &&rhs) noexcept {
	if (this != &rhs) {
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
		rhs.elements = rhs.first_free = rhs.cap = nullptr;
	}
	return *this;
}

void StrVec::reallocate() {
	// we'll allocate space for twice as many elements as the current size
	auto newcapacity = size() ? 2 * size() : 1;
	// allocate new memory
	auto first = alloc.allocate(newcapacity);
	// move the data from the old memory to the new
	auto last = uninitialized_copy(make_move_iterator(begin()), make_move_iterator(end()), first);
	free();
	elements = first;
	first_free = last;
	cap = elements + newcapacity;
}

void StrVec::reserve(std::size_t new_cap) {
	if (new_cap > capacity()) {
		auto data = alloc.allocate(new_cap);
		auto last = uninitialized_copy(begin(), end(), data);
		free();
		elements = data;
		first_free = last;
		cap = elements + new_cap;
	}
}

void StrVec::resize(const std::size_t count, const std::string &s) {
	if (count > size()) {
		for (auto i = size(); i != count; ++i)
			push_back(s);
	} else if (count < size()) {
		for (auto i = size() - count; i != 0; --i)
			alloc.destroy(--first_free);
	}
}

bool operator==(const StrVec &lhs, const StrVec &rhs) {
	return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(), rhs.begin());
}

bool operator!=(const StrVec &lhs, const StrVec &rhs) {
	return !(lhs == rhs);
}

bool operator<(const StrVec &lhs, const StrVec &rhs) {
	return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}

StrVec &StrVec::operator=(std::initializer_list<std::string> il) {
	auto data = alloc_n_copy(il.begin(), il.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}
