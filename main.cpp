#include <iostream>
#include "point.h"
#include "line.h"
#include "triangle.h"

int main() {
    point p1, p2, p3;

    p1 = point(0,0);
    p2 = point(0,1);
    p3 = point(1,0);

    triangle t(p1, p2, p3);

    std::cout << "Triangle's perimeter: " << t.perimeter() << std::endl;
    std::cout << "Triangle's area: " << t.area() << std::endl;
    return 0;
}