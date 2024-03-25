#pragma once

class Shape
{
    public:
        Shape();
        Shape(double length);

        const double GetLength();

    private:
        double length;
};