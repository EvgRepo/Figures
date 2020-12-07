#pragma once
#include "Figure.h"

class Rhomb : public Figure
{
private:
	int width;
public:
	Rhomb(int width);
	~Rhomb();
	void DrawFigure() override;
};