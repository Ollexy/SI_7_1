#pragma once
#include <iostream>

class Shape
{
protected:
	std::string name;
	double area;
	double perimeter;
	std::string perimeterFormula;
	std::string areaFormula;
	double calculateArea();
	double calculatePerimeter();

public:
	void toString();
	double getPerimeter();
	double getArea();
	void getPerimterFormula();
	void getAreaFormula();
};

