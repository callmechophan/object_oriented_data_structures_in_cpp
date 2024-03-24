#include "Cube.h"
#include <iostream>

Cube::Cube()
{
    length = 1;
    std::cout << "DEFAULT CONSTRUCTOR CALLED!" << std::endl;
};

Cube::Cube(double length) 
{
    this->length = length;
    std::cout << "CUSTOM CONSTRUCTOR CALLED!" << std::endl;
};

// or
// Cube::Cube(double length):length(length){};

Cube::Cube(const Cube& c)
{
    length = c.length;
    std::cout << "COPY CONSTRUCTOR CALLED!" << std::endl;
};

Cube& Cube::operator=(const Cube& c)
{
    length = c.length;
    std::cout << "COPY ASSIGNMENT OPERATOR CALLED!" << std::endl;

    return *this;
};

double Cube::GetVolume()
{
    return length * length * length;
};

double Cube::GetSurfaceArea()
{
    return 6 * length * length;
};

void Cube::SetLength(double length)
{
    this->length = length;
};