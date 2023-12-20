class Base { ... };
(a) class Derived : public Derived { ... }; // can't inherits own class
(a) class Derived : private Base { ... };   // legal, because this is definition
(a) class Derived : public Base; 	    // illegal, because this is declaration. Don't need to write class derivation list
