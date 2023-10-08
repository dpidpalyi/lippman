#include <string>

typedef std::string Type;
Type initval();
class Exercise {
	public:
		typedef double Type;
		Type setVal(Type);
		Type initVal();
	private:
		int val;
};

//Type Exercise::setVal(Type parm) {
Exercise::Type Exercise::setVal(Type parm) {
	val = parm + initVal();
	return val;
}
