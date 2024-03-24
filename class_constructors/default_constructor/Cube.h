#pragma once

class Cube
{
    public:
        Cube(); // custom default constructor

        double GetVolume();
        double GetSurfaceArea();
        void SetLength(double length);

    private:
        double length;
};