#include "Rectangle.h"

int Rectangle::GetA() const { return a; }
int Rectangle::GetB() const { return b; }

void Rectangle::SetA(int a) { this->a = a; }
void Rectangle::SetB(int b) { this->b = b; }

Rectangle::Rectangle() : a(0), b(0) {}
Rectangle::Rectangle(int a = 0, int b = 0) : a(a), b(b) {}

void Rectangle::Print() {
	cout << "S (square) of Rectangle = wide * length" << endl;
	cout << "The value of 'wide' is equal to: " << GetA() << endl;
	cout << "The value of 'length' is equal to: " << GetB() << endl;
}

double Rectangle::Square() {
	return GetA() * GetB();
}