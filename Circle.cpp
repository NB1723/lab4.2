#include "Circle.h"

int Circle::GetR() const { return r; }

void Circle::SetR(int r) { this->r = r; }

Circle::Circle() : r(0) {}
Circle::Circle(int r = 0) : r(r) {}

void Circle::Print()
{
	cout << "S (square) of Circle = PI * radius ^ 2" << endl;
	cout << "The value of 'radius' is equal to: " << GetR() << endl;
}

double Circle::Square()
{
	const double PI = atan(1) * 4;
	return PI * GetR() * GetR();
}