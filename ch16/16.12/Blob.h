#ifndef BLOB_H
#define BLOB_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <iostream>

template <typename> class BlobPtr;
template <typename> class ConstBlobPtr;
template <typename> class Blob;
template <typename T> bool operator==(const Blob<T> &, const Blob<T> &);
template <typename T> bool operator<(const Blob<T> &, const Blob<T> &);

template <typename T>
class Blob {
  friend class BlobPtr<T>;
  friend class ConstBlobPtr<T>;
  friend bool operator==<T>(const Blob<T> &, const Blob<T> &);
  friend bool operator< <T>(const Blob<T> &, const Blob<T> &);
public:
  using size_type = typename std::vector<T>::size_type;
  using value_type = T;

  using iterator = BlobPtr<T>;
  using const_iterator = ConstBlobPtr<T>;

  Blob() : data(std::make_shared<std::vector<T>>()) {}

  Blob(std::initializer_list<T> il) : data(std::make_shared<std::vector<T>>(il)) {}

  Blob(const Blob &rhs)
    : data(std::make_shared<std::vector<T>>(*rhs.data)) {}

  Blob &operator=(const Blob &rhs) {
	  data = std::make_shared<std::vector<T>>(*rhs.data);
		return *this;
	}

  T &operator[](size_type n) { return (*data)[n]; }

  const T &operator[](size_type n) const { return (*data)[n]; }

  size_type size() const { return data->size(); }

  bool empty() const { return data->empty(); }

  void push_back(const T &s) { data->push_back(s); }

  void push_back(T &&s) { data->push_back(std::move(s)); }

  void pop_back() {
		check(0, "pop_back on empty Blob");
		data->pop_back();
	}

  T &front() {
		check(0, "front on empty Blob");
		return data->front();
	}

  const T &front() const {
		check(0, "front on empty Blob");
		return data->front();
	}

  T &back() {
		check(0, "back on empty StrBlob");
		return data->back();
	}

  const T &back() const {
		check(0, "back on empty StrBlob");
		return data->back();
	}

  iterator begin() { return iterator(*this); }

  iterator end() { return iterator(*this, size()); }

  const_iterator begin() const { return const_iterator(*this); }

  const_iterator cbegin() const { return begin(); }
	
  const_iterator end() const { return const_iterator(*this, size()); }

  const_iterator cend() const { return end(); }

private:
  std::shared_ptr<std::vector<T>> data;

	void check(size_type pos, const std::string &msg) const {
		if (pos >= size())
			throw std::out_of_range(msg);
}
};

template <typename T>
bool operator==(const Blob<T> &lhs, const Blob<T> &rhs) {
  return *lhs.data == *rhs.data;  // compare value
}

template <typename T>
bool operator!=(const Blob<T> &lhs, const Blob<T> &rhs) {
  return !(lhs == rhs);
}

template <typename T>
bool operator<(const Blob<T> &lhs, const Blob<T> &rhs) {
  return *lhs.data < *rhs.data;  // compare value
}

template <typename T>
bool operator>(const Blob<T> &lhs, const Blob<T> &rhs) {
  return rhs < lhs;
}

template <typename T>
bool operator<=(const Blob<T> &lhs, const Blob<T> &rhs) {
  return !(lhs > rhs);
}

template <typename T>
bool operator>=(const Blob<T> &lhs, const Blob<T> &rhs) {
  return !(lhs < rhs);
}

using StrBlob = Blob<std::string>;

#endif
