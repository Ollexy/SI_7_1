#include "Square.h"

double Square::calculateArea()
{
    return a * a;
}

double Square::calculatePerimeter()
{
    return 4 * a;
}

Square::Square(std::string name)
{
    this->name = name;
    std::cout << "Insert size length:";
    std::cin >> a;
    area = calculateArea();
    perimeter = calculatePerimeter();
    perimeterFormula = "aa";
    areaFormula = "4a";
}

void Square::toString()
{
    std::cout << name << std::endl;
    std::cout << "Size a length:" << a << std::endl;
    std::cout << "Perimeter:" << perimeter << std::endl;
    std::cout << "Area:" << area << std::endl;
}