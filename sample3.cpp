#include <iostream>

class Base 
{
	public:
		static void Foo() { std::cout << "Foo\n"; }
};

class X : public Base { };

class Y : public Base { };

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