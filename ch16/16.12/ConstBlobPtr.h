#ifndef CONSTBLOBPTR_H
#define CONSTBLOBPTR_H

template <typename> class ConstBlobPtr;
template <typename> class Blob;
template <typename T> bool operator==(const ConstBlobPtr<T> &, const ConstBlobPtr<T> &);
template <typename T> bool operator<(const ConstBlobPtr<T> &, const ConstBlobPtr<T> &);
template <typename T> int operator-(const ConstBlobPtr<T> &, const ConstBlobPtr<T> &);

#include <vector>
#include <string>
#include <memory>
#include <stdexcept>

template <typename T>
class ConstBlobPtr {
  friend bool operator==<T>(const ConstBlobPtr<T> &, const ConstBlobPtr<T> &);
  friend bool operator< <T>(const ConstBlobPtr<T> &, const ConstBlobPtr<T> &);
  friend int operator- <T>(const ConstBlobPtr &, const ConstBlobPtr &);

public:
  using size_type = typename std::vector<T>::size_type;

  ConstBlobPtr() : wptr(), curr(0) {}

  explicit ConstBlobPtr(const Blob<T> &sb, size_type pos = 0) : wptr(sb.data), curr(pos) {}

  // do not check range
  const T &operator[](size_type n) const { return (*wptr.lock())[n]; }

  ConstBlobPtr &operator++() {
		check(curr, "increment past end of ConstBlobPtr");
		++curr;
		return *this;
	}

  ConstBlobPtr operator++(int) {
		auto ret = *this;
		++*this;
		return ret;
	}

  ConstBlobPtr &operator--() { 
		check(curr, "decrement past end of ConstBlobPtr");
		--curr;
		return *this;
	}

  ConstBlobPtr operator--(int) {
		auto ret = *this;
		--*this;
		return ret;
	}

  ConstBlobPtr<T> &operator+=(int n) {
		curr += n;
		return *this;
	}

  ConstBlobPtr<T> &operator-=(int n) {
		curr -= n;
		return *this;
	}

  ConstBlobPtr<T> operator+(int n) const {
		auto ret = *this;
		return ret += n;
	}
		
  ConstBlobPtr<T> operator-(int n) const {
		auto ret = *this;
		return ret -= n;
	}

  const T &operator*() const {
		auto p = check(curr, "dereference past end");
		return (*p)[curr];
	}

  const T *operator->() const { return &this->operator*(); }

private:
  std::weak_ptr<std::vector<T>> wptr;
  size_type curr;

  std::shared_ptr<std::vector<T>> check(size_type pos, const std::string &msg) const {
	  auto ret = wptr.lock();
		if (!ret)
			throw std::runtime_error("unbound ConstBlobPtr");
		if (pos >= ret->size())
			throw std::out_of_range(msg);
		return ret;
	};
};

template <typename T>
int operator-(const ConstBlobPtr<T> &lhs, const ConstBlobPtr<T> &rhs) {
  return lhs.curr - rhs.curr;
}

template <typename T>
bool operator==(const ConstBlobPtr<T> &lhs, const ConstBlobPtr<T> &rhs) {
  // compare identity
  return lhs.wptr.lock() == rhs.wptr.lock() && lhs.curr == rhs.curr;
}

template <typename T>
bool operator!=(const ConstBlobPtr<T> &lhs, const ConstBlobPtr<T> &rhs) {
  return !(lhs == rhs);
}

template <typename T>
bool operator<(const ConstBlobPtr<T> &lhs, const ConstBlobPtr<T> &rhs) {
  return lhs.wptr.lock() == rhs.wptr.lock() && lhs.curr < rhs.curr;
}

template <typename T>
bool operator>(const ConstBlobPtr<T> &lhs, const ConstBlobPtr<T> &rhs) {
  return rhs < lhs;
}

template <typename T>
bool operator<=(const ConstBlobPtr<T> &lhs, const ConstBlobPtr<T> &rhs) {
  return !(lhs > rhs);
}

template <typename T>
bool operator>=(const ConstBlobPtr<T> &lhs, const ConstBlobPtr<T> &rhs) {
  return !(lhs < rhs);
}

using ConstStrBlobPtr = ConstBlobPtr<std::string>;

#endif
