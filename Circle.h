#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	int radius;
public:
	Circle(int radius);
	~Circle();
	void DrawFigure() override;
};