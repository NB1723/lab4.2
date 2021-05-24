#pragma once
#include "Area.h"

class Rectangle : public Area
{
private:
	int a;
	int b;

public:
	Rectangle();
	Rectangle(int a, int b);

	int GetA() const;
	int GetB() const;
	void SetA(int);
	void SetB(int);

	virtual double Square();
	virtual void Print();
};