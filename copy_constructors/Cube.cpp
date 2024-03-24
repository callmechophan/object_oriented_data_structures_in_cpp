#include "Cube.h"
#include <iostream>

Cube::Cube()
{
    length = 1;
    std::cout << "DEFAULT CONSTRUCTOR INVOKED!" << std::endl;
};

Cube::Cube(double length) 
{
    this->length = length;
    std::cout << "CUSTOM CONSTRUCTOR INVOKED!" << std::endl;
};

// or
// Cube::Cube(double length):length(length){};

Cube::Cube(const Cube &c)
{
    length = c.length;
    std::cout << "COPY CONSTRUCTOR INVOKED!" << std::endl;
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