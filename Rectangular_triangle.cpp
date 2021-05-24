#include "Rectangular_triangle.h"

int Rectangular_triangle::GetA() const { return a; }
int Rectangular_triangle::GetB() const { return b; }

void Rectangular_triangle::SetA(int a) { this->a = a; }
void Rectangular_triangle::SetB(int b) { this->b = b; }

Rectangular_triangle::Rectangular_triangle()
	: a(0), b(0)
{}

Rectangular_triangle::Rectangular_triangle(int a, int b)
	: a(a), b(b)
{}

void Rectangular_triangle::Print()
{
	cout << "S (square) of Rectangular triangle = 1/2 * leg a of triangle * leg b of triangle" << endl;
	cout << "The value of 'leg a of triangle' is equal to: " << GetA() << endl;
	cout << "The value of 'leg b of triangle' is equal to: " << GetB() << endl;
}

double Rectangular_triangle::Square()
{
	return GetA() * GetB() / 2;
}
