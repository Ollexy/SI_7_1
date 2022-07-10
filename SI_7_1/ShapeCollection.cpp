#include "ShapeCollection.h"

void ShapeCollection::addShape(std::string figureType) {
	if (figureType == "Square")
		squares.push_back(Square("Square"));
	else if (figureType == "Circle")
		circles.push_back(Circle("Circle"));
	else
		std::cout << "UNABLE OPTION!";
}

void ShapeCollection::getShapesTable() {
	std::cout << "Circles:\n";
	for (auto c : circles) {
		c.toString();
	}
	std::cout << "\nSquares:\n";
	for (auto s : squares) {
		s.toString();
	}
}

void ShapeCollection::getLargestShapeByPerimeter() {
	double maxCircle = 0;
	int maxCircleIndex = 0;
	double maxSquare = 0;
	int maxSquareIndex = 0;

	int temp1 = 0;
	for (auto c : circles) {
		if (c.getPerimeter() > maxCircle) {
			maxCircle = c.getPerimeter();
			maxCircleIndex = temp1;
		}
		temp1++;
	}
	temp1 = 0;
	for (auto s : squares) {
		if (s.getPerimeter() > maxSquare){
			maxSquare = s.getPerimeter();
			maxSquareIndex = temp1;
		}
		temp1++;
	}
	
	std::cout << "The biggest figure by perimeter:\n";
	if (maxCircle >= maxSquare)
		circles[maxCircleIndex].toString();
	else if (maxCircle < maxSquare)
		squares[maxSquareIndex].toString();
	else
		std::cout << "error 404";
}

void ShapeCollection::getLargestShapeByArea() {
	double maxCircle = 0;
	int maxCircleIndex = 0;
	double maxSquare = 0;
	int maxSquareIndex = 0;

	int temp1 = 0;
	for (auto c : circles) {
		if (c.getArea() > maxCircle) {
			maxCircle = c.getArea();
			maxCircleIndex = temp1;
		}
		temp1++;
	}
	temp1 = 0;
	for (auto s : squares) {
		if (s.getArea() > maxSquare) {
			maxSquare = s.getArea();
			maxSquareIndex = temp1;
		}
		temp1++;
	}

	std::cout << "The biggest figure by area:\n";
	if (maxCircle >= maxSquare)
		circles[maxCircleIndex].toString();
	else if (maxCircle < maxSquare)
		squares[maxSquareIndex].toString();
	else
		std::cout << "error 404";
}

void ShapeCollection::getFormulas() {
	if (squares.size() > 0) {
		std::cout << "Squares:\n";
		squares[0].getPerimterFormula();
		std::cout << std::endl;
		squares[0].getAreaFormula();
	}
	if (circles.size() > 0) {
		std::cout << "\nCircles:\n";
		circles[0].getPerimterFormula();
		std::cout << std::endl;
		circles[0].getAreaFormula();
	}
}
