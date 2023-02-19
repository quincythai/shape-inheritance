// Inheritance1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
	
	
    Triangle myTriangle(1, 1);
    /*
    cout << myTriangle.getWidth() << endl;
    cout << myTriangle.getHeight() << endl;
    myTriangle.setWidth(30);
    myTriangle.setHeight(20);
    myTriangle.setWidth(-100);
    cout << myTriangle.getArea() << endl;
    cout << myTriangle.getPerimeter() << endl;

    */
    Rectangle myRectangle(1, 0);
	/*
    cout << myRectangle.getWidth() << endl;
    cout << myRectangle.getHeight() << endl;

    myRectangle.setWidth(1);
    cout << myRectangle.getWidth() << endl;
    myRectangle.setHeight(0);
    cout << myRectangle.getHeight() << endl;
    
    */
    /*Shape myShape(30, 50);
	
    cout << myShape.getArea() << endl;
    myShape.setHeight(20);
    myShape.setWidth(-1);
    cout << myShape.getHeight() << endl;
    cout << myShape.getWidth() << endl;
    cout << myShape.getArea() << endl;
    cout << myShape.getPerimeter() << endl;
   
	myShape.setWidth(8);
	myShape.setHeight(4);
	*/
	myRectangle.setWidth(8);
	myRectangle.setHeight(4);
	myTriangle.setWidth(8);
	myTriangle.setHeight(4);
	Shape * shapes[2] = {&myRectangle, &myTriangle};
	for (int i = 0; i < 2; i++)
		cout << shapes[i]->getArea() << endl;  // illustrates dynamic binding
	
	return 0;
}

