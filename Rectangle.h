#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape
{
	// A rectangle must have width >= 2

public:
    Rectangle(int w = 2, int h = 1);

    void setWidth(int w);

    int getArea() const;
    
   

	int getPerimeter() const;

};
#endif
