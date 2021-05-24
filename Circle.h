#pragma once
#include "Area.h"

class Circle : public Area
{
private:
	int r;

public:
	Circle();
	Circle(int r);

	int GetR() const;
	void SetR(int);

	virtual double Square();
	virtual void Print();
};