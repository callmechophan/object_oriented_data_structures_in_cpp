#include <iostream>
#include "Shape.h"

Shape::Shape()
{
    length = 1;
};

Shape::Shape(double length) : length(length) // initialization list
{
    std::cout << "CUSTOM CONSTRUCTOR CALLED!" << std::endl;
};

const double Shape::GetLength()
{
    return length;
};