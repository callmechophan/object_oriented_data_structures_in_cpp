#include "Cube.h"

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