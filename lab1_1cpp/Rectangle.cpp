#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

double Rectangle::width() {
    return std::abs(x2 - x1);
}

double Rectangle::height() {
    return std::abs(y2 - y1);
}

double Rectangle::area() {
    return width() * height();
}

double Rectangle::perimeter() {
    return 2 * (width() + height());
}