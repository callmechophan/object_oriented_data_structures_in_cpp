#pragma once

class Cube {
    public:
        Cube(); // custom default constructor
        Cube(double length); // custom constructor

        double GetVolume();
        double GetSurfaceArea();
        void SetLength(double length);

    private:
        double length;
};
