#include "shape.h"

double Shape::getPerimeter() {
	return perimeter;
}

double Shape::getArea() {
	return area;
}

void Shape::getPerimterFormula() {
	std::cout << perimeterFormula;
}

void Shape::getAreaFormula() {
	std::cout << areaFormula;
}
