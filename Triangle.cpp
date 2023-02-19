
#include "Triangle.h"
#include <cmath>
using namespace std;

Triangle::Triangle(int w, int h):Shape(w,h) {
    setWidth(w);
    setHeight(h);

}

void Triangle::setWidth(int w) {
    if (w < 3)
        w = 3;
    width = w;
}
void Triangle::setHeight(int h) {
    if (h < 2)
        h = 2;
    height = h;
}

int Triangle::getArea() const {
    //return Shape::getArea() / 2;
    return (width * height) / 2;
}
int Triangle::getPerimeter() const {
    double b = width / 2.0;
    double sideLength = sqrt(b * b + height * height);
    return (int) ( width + 2 * sideLength);
}
