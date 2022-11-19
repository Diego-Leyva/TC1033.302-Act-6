#include "point.h"
#include "cmath"

point::point() {
    x = 0;
    y = 0;
}

point::point(double x, double y) {
    this->x = x;
    this->y = y;
}

double point::get_x() {
    return x;
}

double point::get_y() {
    return y;
}

void point::set_x(double x) {
    this->x = x;
}

void point::set_y(double y) {
    this->y = y;
}

double point::distance(point p) {
    return sqrt(pow((p.x - x), 2) + pow((p.y - y), 2));
}