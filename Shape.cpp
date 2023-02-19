#include "Shape.h"

Shape::Shape(int w, int h)
{
    setWidth(w);
    setHeight(h);
}

int Shape::getWidth() const
{
    return width;
}
int Shape::getHeight() const 
{
    return height;
}


void Shape::setWidth(int w)
{
    if (w < 1)
        w = 1;
    width = w;
}
void Shape::setHeight(int h) 
{
    if (h < 1)
        h = 1;
    height = h;
}
/*
int Shape::getArea() const
{
    return width * height;
}


int Shape::getPerimeter() const 
{
    return 2 * width + 2 * height;
}
*/