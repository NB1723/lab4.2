#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

class Area
{
public:
	virtual double Square() = 0;
	virtual void Print() = 0;
};