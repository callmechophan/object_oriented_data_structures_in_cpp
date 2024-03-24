#pragma once

class Cube
{
	public:
		double GetVolume();
		double GetSurfaceArea();
		void SetLength(double length);
	
	private:
		double length;
};