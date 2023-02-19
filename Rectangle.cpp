


#include "Rectangle.h"


Rectangle::Rectangle(int w , int h ) : Shape(w, h)
{
    setWidth(w);
}


void Rectangle::setWidth(int w) {
    if (w < 2)
        w = 2;
    width = w;
}

int Rectangle::getArea() const {
	return width * height;
}
    
   

int Rectangle::getPerimeter() const {
	return 2*width + 2*height;
}


