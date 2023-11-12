#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <map>
#include <memory>
#include <set>

#include "StrBlob.h"
#include "ConstStrBlobPtr.h"

using line_no = StrBlob::size_type;

class QueryResult;

class TextQuery {
	public:
		TextQuery(std::ifstream &);
		QueryResult query(const std::string &) const;
	private:
		StrBlob file;
		std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};


TextQuery::TextQuery(std::ifstream &infile) {
	std::string line;
	while (getline(infile, line)) {
		file.push_back(line);
	  int n = file.size() - 1;
    std::istringstream in(line);
		std::string word;
		while (in >> word) {
			auto &lines = wm[word];
			if (!lines)
				lines.reset(new std::set<line_no>);
			lines->insert(n);
		}
	}
}

class QueryResult {
	friend std::ostream &print(std::ostream &, const QueryResult &);
	public:
		QueryResult(std::string s,
				std::shared_ptr<std::set<line_no>> p,
				StrBlob f):
			sought(s), lines(p), file(f) {}
	private:
		std::string sought;
		std::shared_ptr<std::set<line_no>> lines;
		StrBlob file;
};

QueryResult TextQuery::query(const std::string &sought) const {
	static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
	auto loc = wm.find(sought);
	if (loc == wm.end())
		return QueryResult(sought, nodata, file);
	else
		return QueryResult(sought, loc->second, file);
}

std::string make_plural(int n, const std::string &w, const std::string &suffix) {
	return (!n || n > 1) ? w + suffix : w;
}

std::ostream &print(std::ostream &os, const QueryResult &qr) {
	os << qr.sought << " occurs " << qr.lines->size() << " "
		 << make_plural(qr.lines->size(), "time", "s") << std::endl;
	for (auto num : *qr.lines) {
		auto pos = qr.file.cbegin();
		for (decltype(num) i = 0; i != num; ++i)
			pos.inc();
		os << "\t(line " << num + 1 << ") "
			 << pos.deref() << std::endl;
	}
	return os;
}


#endif
