#include "Rectangle.h"

Rectangle::Rectangle() {

}
Rectangle::~Rectangle() {

}

void Rectangle::Size() {
	result = width * height;
}
void Rectangle::Draw() {
	printf("rectangle : %f\n", result);
}