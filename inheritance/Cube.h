#pragma once

#include "Shape.h"

class Cube : public Shape
{
    public:
        Cube(double length);

        const double GetVolume();
};