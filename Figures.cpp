#include "App.h"
#include "Circle.h"
#include "Quad.h"
#include "Rect.h"
#include "Rhomb.h"
#include "Triangle.h"

int main()
{
    App app;
    Circle* circle = new Circle(9);
    Quad* quad = new Quad(9);
    Rectangle* rectangle = new Rectangle(9, 4);
    Rhomb* rhomb = new Rhomb(5);
    Triangle* triangle = new Triangle(6);

    app.AddFigure(circle);
    app.AddFigure(quad);
    app.AddFigure(rectangle);
    app.AddFigure(rhomb);
    app.AddFigure(triangle);

    app.DrawFigures();

    app.~App();

    return 0;
}
