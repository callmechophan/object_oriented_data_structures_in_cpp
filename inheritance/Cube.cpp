#include "Cube.h"

Cube::Cube(double length) : Shape(length) {}; // initialization list

const double Cube::GetVolume()
{
    return GetLength() * GetLength() * GetLength();
};