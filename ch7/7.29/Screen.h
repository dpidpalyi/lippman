#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>

class Screen {
	public:
		typedef std::string::size_type pos;
		Screen() = default; // needed because Screen has another consructor
		// cursor initialized to 0 by its in-class initializer
		Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
		char get() const { return contents[cursor]; } // implicitly inline
		inline char get(pos ht, pos wd) const; // explicitly inline
		Screen move(pos r, pos c); // can be made inline later

		// set char at some position
		Screen set(char);
		Screen set(pos, pos, char);

		// display overloaded on whether the object is const or not
		Screen display(std::ostream &os) { do_display(os); return *this; }
		const Screen display(std::ostream &os) const { do_display(os); return *this; }

	private:
		// function to do the work of displaying a Screen
		void do_display(std::ostream &os) const { os << contents; }
		pos cursor = 0;
		pos height = 0, width = 0;
		std::string contents;
};

inline Screen Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const { // declared as inline in the class
	pos row = r * width;           // compute row location
	return contents[row + c];      // return character at the given column
}

inline Screen Screen::set(char c) {
	contents[cursor] = c; // set the new value at the current cursor location
	return *this;         // return this object as an lvalue
}

inline Screen Screen::set(pos r, pos col, char ch) {
	contents[r * width + col] = ch;
	return *this;
}

#endif
