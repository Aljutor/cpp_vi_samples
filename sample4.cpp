#include <iostream>

class Base 
{
	public:
		void Foo() { std::cout << "Foo\n"; }
};

class X : public virtual Base { };

class Y : public virtual Base { };

class XY : public X, public Y {
	public:
		void Bar() { std::cout << "Bar\n"; }
};



int main(int argc, char const *argv[])
{
	XY obj = XY();

	obj.Bar();
	obj.Foo();

	return 0;
}