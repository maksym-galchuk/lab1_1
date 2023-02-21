#include "Rectangle.h"
#include <cstdio>

int main() {
    Rectangle r1(0, 0, 5, 10);
    printf("Coordinates: (%.1f; %.1f), (%.1f; %.1f), (%.1f; %.1f), (%.1f; %.1f) \n",
        r1.getX1(), r1.getY1(), r1.getX1(), r1.getY2(), r1.getX2(), r1.getY2(), r1.getX2(), r1.getY1());
    printf("Width: %.1f\n", r1.width());
    printf("Height: %.1f\n", r1.height());
    printf("Area: %.1f\n", r1.area());
    printf("Perimeter: %.1f\n", r1.perimeter());
    
    return 0;
}