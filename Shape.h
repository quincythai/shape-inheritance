#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected:
    int width, height; // must be >= 1


public:

    Shape(int w = 1, int h = 1);

    int getWidth() const;
    int getHeight() const;


    virtual void setWidth(int w) ;
    virtual void setHeight(int h) ;

	virtual int getArea() const = 0;
    
    //virtual int getArea() const;

	virtual int getPerimeter() const = 0;
    //virtual int getPerimeter() const;

};

#endif
