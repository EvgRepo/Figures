#include "Quad.h"

void Quad::DrawFigure()
{
	std::string shape;
	int i = 0, j = 0;
	while (j < this->width)
	{
		i = 0;
		while (i < this->width)
		{
			shape += "*";
			i++;
		}
		j++;
		shape += "\n";
	}
	this->shape = shape;
	this->Figure::DrawFigure();
}

Quad::Quad(int width)
{
	this->width = width;
}