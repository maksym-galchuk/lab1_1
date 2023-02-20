#include "Rectangle.h"
#include <iostream>

int main() {
    Rectangle r1(0, 0, 5, 10);
    std::cout << "Width: " << r1.width() << std::endl;
    std::cout << "Height: " << r1.height() << std::endl;
    std::cout << "Area: " << r1.area() << std::endl;
    std::cout << "Perimeter: " << r1.perimeter() << std::endl;
    return 0;
}