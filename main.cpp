#include <stdio.h>
#include <iostream>
#include "Min.h"

int main() {
	Min<int,int> n1(22, 20);
	Min<int, float> n2(1, 3.6f);
	Min<int, double> n3(5, 7.6);
	Min<float, float>n4(3.1f, 2.5f);
	Min<float, double>n5(1.2f, 0.4);
	Min<double, double>n6(3.6, 4.3);

	std::cout << "int, int : "<< n1.GetMin() << std::endl;
	std::cout << "int, float : "<< n2.GetMin() << std::endl;
	std::cout << "int, double : "<< n3.GetMin() << std::endl;
	std::cout << "float, float : "<< n4.GetMin() << std::endl;
	std::cout << "float, double : "<< n5.GetMin() << std::endl;
	std::cout << "double, double : "<< n6.GetMin() << std::endl;

	return 0;
}