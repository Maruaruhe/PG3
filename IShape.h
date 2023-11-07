#pragma once
#include <stdio.h>
#define M_PI 3.14

class IShape {
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;
protected:
	float result;

};