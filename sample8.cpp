#include <iostream>

class Base 
{
	public:
		int value = 0 ;
		Base(int x) {
			value = x;
			std::cout << x << "Base constructor\n" ;
		}

		void Foo() {
			std::cout << value << "Foo\n";
		}
};

class X : public virtual Base {
	public:
		X(int x) : Base(x) {
			std::cout << x << "X constructor\n" ;
		}

		void Boo() {
			std::cout << value << "Boo\n";
		}
};

class Y : public virtual Base {
	public:
		Y(int x) : Base(x) { 
			std::cout << x << "Y constructor\n"; 
		}

		void Zoo() {
			std::cout << value << "Zoo\n";
		}
};

class XY : public X, public Y {
	public:
		XY() : Base(42), X(2), Y (4) {
		 	std::cout << "XY constructor\n"; 
		}

		void Bar() {
			std::cout << value << "Bar\n";
		}
};



int main(int argc, char const *argv[])
{
	XY obj = XY();

	obj.Foo();
	obj.Bar();

	obj.Zoo();
	obj.Boo();

	return 0;
}