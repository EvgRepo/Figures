#pragma once

#include <iostream>

class Figure 
{
protected:
	std::string shape;
public:
	virtual void DrawFigure();
};