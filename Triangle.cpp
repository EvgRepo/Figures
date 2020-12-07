#include "Triangle.h"

void Triangle::DrawFigure()
{
	std::string shape;
	int i = 0, j = 0, k = 0;
	while (i < this->width)
	{
		while (k <= this->width - i - 2)
		{
			shape += " ";
			k++;
		}
		k = 0;
		while (j < 2 * i - 1)
		{
			shape += "*";
			j++;
		}
		j = 0;
		i++;
		shape += "\n";
	}
	this->shape = shape;
	this->Figure::DrawFigure();
}

Triangle::Triangle(int width)
{
	this->width = width;
}