#pragma once
#include "Area.h"

class Rectangular_triangle : public Area
{
private:
	int a;
	int b;

public:
	Rectangular_triangle();
	Rectangular_triangle(int a, int b);

	int GetA() const;
	int GetB() const;
	void SetA(int);
	void SetB(int);

	virtual double Square();
	virtual void Print();
};