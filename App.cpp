#include "App.h"

void App::DrawFigures() 
{
	for (Figure* figure : this->figures)
	{
		figure->DrawFigure();
	}
}

void App::AddFigure(Figure* figure)
{
	this->figures.push_back(figure);
}