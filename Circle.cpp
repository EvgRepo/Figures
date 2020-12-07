#include "Circle.h"
#include <math.h>

void Circle::DrawFigure() 
{
	std::string shape;
	int c = 0;
	int r = this->radius;
	
	const int width = r;
	const int length = r * 1.5;

	for (int y = width; y >= -width; y-=2)
	{
		for (int x = -length; x <= length; x++)
		{
			if ((int)(sqrt(pow(x, 2) + pow(y, 2))) == r)
				shape += "*";
			else
				shape += " ";
		}
		shape += "\n";
	}
	this->shape = shape;
	this->Figure::DrawFigure();
}

Circle::Circle(int radius)
{
	this->radius = radius;
}