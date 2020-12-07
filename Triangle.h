#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
	int width;
public:
	Triangle(int width);
	~Triangle();
	void DrawFigure() override;
};