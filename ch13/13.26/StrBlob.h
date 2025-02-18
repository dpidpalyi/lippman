#ifndef STRBLOB_H
#define STRBLOB_H

class StrBlobPtr;
class ConstStrBlobPtr;

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <stdexcept>

class StrBlob {
  friend class StrBlobPtr;
  friend class ConstStrBlobPtr;
public:
  typedef std::vector<std::string>::size_type size_type;

  StrBlob();
  StrBlob(std::initializer_list<std::string> il);
  // Defined in StrBlob.cpp
  // No destructor needed because we use smart pointers
  StrBlob(const StrBlob &Orig);
  StrBlob& operator=(const StrBlob &Orig);

  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }

  void push_back(const std::string &s);
  void pop_back();

  std::string &front();
  const std::string &front() const;
  std::string &back();
  const std::string &back() const;

  StrBlobPtr begin();
  StrBlobPtr end();

  ConstStrBlobPtr cbegin() const;
  ConstStrBlobPtr cend() const;

private:
  std::shared_ptr<std::vector<std::string>> data;

  void check(size_type pos, const std::string &msg) const;
};

inline void StrBlob::push_back(const std::string &s) {
  data->push_back(s);
}

#endif
