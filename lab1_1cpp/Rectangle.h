#pragma once

class Rectangle
{
public:
    Rectangle(double x1, double y1, double x2, double y2);
    double getX1();
    double getY1();
    double getX2();
    double getY2();
    double width();
    double height();
    double area();
    double perimeter();
private:
    double x1, y1, x2, y2;
};
