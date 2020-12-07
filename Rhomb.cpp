#include "Rhomb.h"

void Rhomb::DrawFigure()
{
	std::string shape;
	int space = this->width - 1;

	for (int i = 0; i < this->width; i++)
	{
		for (int j = 0; j < space; j++)
			shape += " ";
		for (int j = 0; j <= i; j++)
			shape += "* ";
		shape += "\n";
		space--;
	}
	space = 0;
	for (int i = this->width; i > 0; i--)
	{
		for (int j = 0; j < space; j++)
			shape += " ";
		for (int j = 0; j < i; j++)
			shape += "* ";
		shape += "\n";
		space++;
	}
	this->shape = shape;
	this->Figure::DrawFigure();
}

Rhomb::Rhomb(int width)
{
	this->width = width;
}