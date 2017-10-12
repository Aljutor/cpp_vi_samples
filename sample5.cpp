#include <iostream>

class Base 
{
	public:
		Base() { std::cout << "Base constructor\n"; }
		void Foo() { std::cout << "Foo\n"; }
};

class X : public virtual Base {
	public:
		X() { std::cout << "X constructor\n"; }
};

class Y : public virtual Base {
	public:
		Y() { std::cout << "Y constructor\n"; }
};

class XY : public X, public Y {
	public:
		XY() { std::cout << "XY constructor\n"; }
		void Bar() { std::cout << "Bar\n"; }
};



int main(int argc, char const *argv[])
{
	XY obj = XY();

	obj.Bar();
	obj.Foo();

	return 0;
}