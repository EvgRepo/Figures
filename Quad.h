#pragma once
#include "Figure.h"

class Quad : public Figure
{
private:
	int width;
public:
	Quad(int width);
	~Quad();
	void DrawFigure() override;
};