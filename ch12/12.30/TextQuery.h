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

using line_no = std::vector<std::string>::size_type;

class QueryResult;

class TextQuery {
	public:
		TextQuery(std::ifstream &);
		QueryResult query(const std::string &) const;
	private:
		std::shared_ptr<std::vector<std::string>> file;
		std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};


TextQuery::TextQuery(std::ifstream &infile): file(new std::vector<std::string>) {
	std::string line;
	while (getline(infile, line)) {
		file->push_back(line);
	  int n = file->size() - 1;
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
				std::shared_ptr<std::vector<std::string>> f):
			sought(s), lines(p), file(f) {}
	private:
		std::string sought;
		std::shared_ptr<std::set<line_no>> lines;
		std::shared_ptr<std::vector<std::string>> file;
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
	for (auto num : *qr.lines)
		os << "\t(line " << num + 1 << ") "
			 << *(qr.file->begin() + num) << std::endl;
	return os;
}


#endif
