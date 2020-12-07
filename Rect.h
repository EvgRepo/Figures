#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
	int width;
	int height;
public:
	Rectangle(int width, int height);
	~Rectangle();
	void DrawFigure() override;
};