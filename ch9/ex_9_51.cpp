#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Date {
	public:
		Date() = default;
		Date(const string &s);
		void print() const {
			cout << "day: " << day << ", month: " << month << ", year: " << year;
		}
	private:
		unsigned year = 0;
		unsigned month = 1;
		unsigned day = 1;
};

Date::Date(const string &s) {
	unsigned format = 0;
	
	// 1/1/1900
	if (s.find_first_of('/') != string::npos)
		format = 1;

	// January 1, 1900 or Jan 1, 1900
	if ((s.find_first_of(',') >= 4) && s.find_first_of(',') != string::npos)
		format = 2;
	// Jan 1 1900
	else if (s.find_first_of(' ') >= 3 && s.find_first_of(' ') != string::npos)
			format = 2;

	switch (format) {
		case 1:
			day = stoi(s);
			month = stoi(s.substr(s.find_first_of('/') + 1));
			year = stoi(s.substr(s.find_last_of('/') + 1));
			break;
		case 2:
			if (s.find("Jan") < s.size()) month = 1;
			if (s.find("Feb") < s.size()) month = 2;
			if (s.find("Mar") < s.size()) month = 3;
			if (s.find("Apr") < s.size()) month = 4;
			if (s.find("May") < s.size()) month = 5;
			if (s.find("Jun") < s.size()) month = 6;
			if (s.find("Jul") < s.size()) month = 7;
			if (s.find("Aug") < s.size()) month = 8;
			if (s.find("Sep") < s.size()) month = 9;
			if (s.find("Oct") < s.size()) month = 10;
			if (s.find("Nov") < s.size()) month = 11;
			if (s.find("Dec") < s.size()) month = 12;

			day = stoi(s.substr(s.find_first_of("123456789")));
			year = stoi(s.substr(s.find_last_of(' ') + 1));
			break;
	}
}

int main() {
	Date d("Jan 1 1900");
	d.print();
	cout << endl;
	Date d1("12/12/2000");
	d1.print();
	cout << endl;
	Date d2("March, 3 1899");
	d2.print();
	cout << endl;
	return 0;
}
