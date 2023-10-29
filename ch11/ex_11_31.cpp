#include <iostream>
#include <map>
#include <string>

using std::multimap;
using std::string;
using std::cout;
using std::endl;

int main() {
	multimap<string, string> authors = {{"Pushkin", "Capitan's daughter"}, {"Lermontov", "The hero of our age"}, {"Tolstoy", "War and Peace"}};

	for (const auto &e : authors)
		cout << e.first << ": " << e.second << endl;
	cout << "====================================" << endl;

	auto iter = authors.find("Lermontov");
	if (iter != authors.end())
		authors.erase(iter);
	else
		cout << "No author finded" << endl;

	for (const auto &e : authors)
		cout << e.first << ": " << e.second << endl;
	cout << "====================================" << endl;
	
	iter = authors.find("Gogol");
	if (iter != authors.end())
		authors.erase(iter);
	else
		cout << "No author finded" << endl;

	for (const auto &e : authors)
		cout << e.first << ": " << e.second << endl;

	return 0;
}
