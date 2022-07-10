#include "Circle.h"

double Circle::calculateArea() {
	return 3.14 * r * r;
}

double Circle::calculatePerimeter() {
	return 2 * 3.14 * r;
}

Circle::Circle(std::string name) {
	this->name = name;
	std::cout << "r length: ";
	std::cin >> r;
	area = calculatePerimeter();
	perimeterFormula = "PI * r * r";
	areaFormula = "2*PI*r";
}

void Circle::toString() {
	std::cout << name << std::endl;
	std::cout << "r length: " << r << std::endl;
	std::cout << "Perimeter: " << perimeter << std::endl;
	std::cout << "Area: " << area << std::endl;
}
