#pragma once
#include "Area.h"

class Trapezium : public Area
{
private:
	int a;
	int b;
	int h;

public:
	Trapezium();
	Trapezium(int a, int b, int h);

	int GetA() const;
	int GetB() const;
	int GetH() const;
	void SetA(int);
	void SetB(int);
	void SetH(int);

	virtual double Square();
	virtual void Print();
};