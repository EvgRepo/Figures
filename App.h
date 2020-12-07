#pragma once

#include <iostream>
#include <vector>
#include "Figure.h"

class App 
{
private:
	std::vector<Figure*> figures;
public:
	App() {};
	~App() {};

	void DrawFigures();
	void AddFigure(Figure* figure);
};