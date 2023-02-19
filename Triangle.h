#ifndef TRIANGLE_H
#define TRIANGLE_H


#include "Shape.h"


class Triangle : public Shape
{

public:
    Triangle(int w = 3, int h = 2);  // width must be >=3, height>=2

    void setWidth(int w);
    void setHeight(int h);

    int getArea() const;
    int getPerimeter() const;


};
#endif
