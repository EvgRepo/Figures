#include "Rect.h"

void Rectangle::DrawFigure()
{
	std::string shape;
	int i = 0, j = 0;
	while (j < this->height)
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

Rectangle::Rectangle(int width, int height)
{
	this->width = width;
	this->height = height;
}