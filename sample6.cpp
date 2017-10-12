#include <iostream>

class Base 
{
	public:
		Base(int x) {
			std::cout << x << "Base constructor\n" ;
		}

		void Foo() {
			std::cout << "Foo\n";
		}
};

class X : public virtual Base {
	public:
		X(int x) : Base(x) {
			std::cout << x << "X constructor\n" ;
		}
};

class Y : public virtual Base {
	public:
		Y(int x) : Base(x) { 
			std::cout << x << "Y constructor\n"; 
		}
};

class XY : public X, public Y {
	public:
		XY() : X(2) , Y (4) {
		 	std::cout << "XY constructor\n"; 
		}

		void Bar() {
			std::cout << "Bar\n";
		}
};



int main(int argc, char const *argv[])
{
	XY obj = XY();

	obj.Bar();
	obj.Foo();

	return 0;
}