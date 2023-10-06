#include "Screen.h"

char Screen::get(pos r, pos c) const { // declared as inline in the class
	pos row = r * width;           // compute row location
	return contents[row + c];      // return character at the given column
}
