#pragma once

class Cube
{
    public:
        Cube(); // custom default constructor
        Cube(double length); // custom constructor
        Cube(const Cube& c); // copy constructor
        Cube& operator=(const Cube& c); // copy assignment operator

        double GetVolume();
        double GetSurfaceArea();
        void SetLength(double length);

    private:
        double length;
};