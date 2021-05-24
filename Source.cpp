#include "Circle.h"
#include "Rectangle.h"
#include "Rectangular_triangle.h"
#include "Trapezium.h"

int main()
{
	cout << "\nCircle:" << endl;
	Circle A(4);
	A.Print();
	cout << "Square of Circle = " << A.Square() << endl << endl;

	cout << "\nRectangle:" << endl;
	Rectangle B(4, 5);
	B.Print();
	cout << "Square of Rectangle = " << B.Square() << endl << endl;

	cout << "\nRectangular_triangle:" << endl;
	Rectangular_triangle C(6, 7);
	C.Print();
	cout << "Square of Rectangle triangle = " << C.Square() << endl << endl;

	cout << "\nTrapezium:" << endl;
	Trapezium D(3, 5, 6);
	D.Print();
	cout << "Square of Trapezium = " << D.Square() << endl << endl;

	Area* pa = new Circle();
	Area* pb = new Rectangle();
	Area* pc = new Rectangular_triangle();
	Area* pd = new Trapezium();

	cout << typeid(pa).name() << endl;
	cout << typeid(*pa).name() << endl;
	cout << typeid(pb).name() << endl;
	cout << typeid(*pb).name() << endl;
	cout << typeid(pc).name() << endl;
	cout << typeid(*pc).name() << endl;
	cout << typeid(pd).name() << endl;
	cout << typeid(*pd).name() << endl << endl;

	delete pa;
	delete pb;
	delete pc;
	delete pd;

	Area* N[4];

	N[0] = &A;
	N[1] = &B;
	N[2] = &C;
	N[3] = &D;

	cout << "Square of N[0] = " << N[0]->Square() << endl;
	cout << "Square of N[1] = " << N[1]->Square() << endl;
	cout << "Square of N[2] = " << N[2]->Square() << endl;
	cout << "Square of N[3] = " << N[3]->Square() << endl;
}