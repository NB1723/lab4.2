#include "Trapezium.h"

int Trapezium::GetA() const { return a; }
int Trapezium::GetB() const { return b; }
int Trapezium::GetH() const { return h; }

void Trapezium::SetA(int a) { this->a = a; }
void Trapezium::SetB(int b) { this->b = b; }
void Trapezium::SetH(int h) { this->h = h; }

Trapezium::Trapezium()
	: a(0), b(0), h(0)
{}

Trapezium::Trapezium(int a, int b, int h)
	: a(a), b(b), h(h)
{}

void Trapezium::Print()
{
	cout << "S (square) of Trapezium = 1/2 * ( base 1 + base 2 ) * height of trapezium" << endl;
	cout << "The value of 'base 1' is equal to: " << GetA() << endl;
	cout << "The value of 'base 1' is equal to: " << GetB() << endl;
	cout << "The value of 'height 1' is equal to: " << GetH() << endl;
}

double Trapezium::Square()
{
	return (GetA() + GetB()) * GetH() / 2;
}