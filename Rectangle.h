#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();

	void Size() override;
	void Draw() override;
private:
	int width = 5;
	int height = 10;
};

