#include "String.h"
#include <algorithm> // equal

std::allocator<char> String::alloc;

void String::reallocate() {
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (std::size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}

void String::push_back(char c) {
	if (size() == capacity())
		reallocate();
	alloc.construct(first_free++, c);
}

std::pair<char*, char*> String::alloc_n_copy(const char *b, const char *e) {
	auto data = alloc.allocate(e - b);
	return {data, std::uninitialized_copy(b, e, data)};
}

String::String(const char *s): String() {
	while (s && *s != '\0')
		push_back(*s++);
	std::cout << "String::String(const char *)" << std::endl;
}

String::String(const String &rhs) {
	auto data = alloc_n_copy(rhs.cbegin(), rhs.cend());
	elements = data.first;
	first_free = cap = data.second;
	std::cout << "String::String(const String&)" << std::endl;
}

String::String(String &&rhs) noexcept: elements(rhs.elements), first_free(rhs.first_free), cap(rhs.cap) {
	rhs.elements = rhs.first_free = rhs.cap = nullptr;
	std::cout << "String::String(String&&)" << std::endl;
}

String &String::operator=(const String &rhs) {
	auto data = alloc_n_copy(rhs.cbegin(), rhs.cend());
	free();
	elements = data.first;
	first_free = cap = data.second;
	std::cout << "String &String::operator=(const String&)" << std::endl;
	return *this;
}

String &String::operator=(String &&rhs) noexcept {
	if (this != &rhs) {
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
		rhs.elements = rhs.first_free = rhs.cap = nullptr;
		std::cout << "String &String::operator=(String&&)" << std::endl;
	}
	return *this;
}

void String::free() {
	if (elements) {
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

void String::reserve(std::size_t newcapacity) {
	if (newcapacity > capacity()) {
		auto data = alloc.allocate(newcapacity);
		auto last = std::uninitialized_copy(cbegin(), cend(), data);
		free();
		elements = data;
		first_free = last;
		cap = elements + newcapacity;
	}
}

void String::resize(std::size_t count, const char c) {
	if (count > size()) {
		for (auto i = size(); i != count; ++i)
			push_back(c);
	} else if (count < size()) {
		for (auto i = size() - count; i != 0; --i)
			alloc.destroy(--first_free);
	}
}

bool operator==(const String &lhs, const String &rhs) {
	return lhs.size() == rhs.size() && std::equal(lhs.cbegin(), lhs.cend(), rhs.cbegin());
}

bool operator!=(const String &lhs, const String &rhs) {
	return !(lhs == rhs);
}
