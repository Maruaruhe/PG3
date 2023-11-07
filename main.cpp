#include <stdio.h>
#include "Rectangle.h"
#include "Circle.h"
#include "IShape.h"

int main() {
	IShape* iShape[2];

	iShape[0] = new Circle;
	iShape[1] = new Rectangle;

	for (int i = 0; i < 2; i++) {
	    iShape[i]->Size();
		iShape[i]->Draw();

		delete iShape[i];
	}

	return 0;
}