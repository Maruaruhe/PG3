#include "Circle.h"

Circle::Circle() {

}
Circle::~Circle() {

}

void Circle::Size() {
	result = radius * radius * M_PI;
}
void Circle::Draw() {
	printf("circle : %f\n", result);
}