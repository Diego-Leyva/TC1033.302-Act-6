#include "line.h"
#include "cmath"

line::line() {
}

line::line(point v1, point v2) {
    this->v1 = v1;
    this->v2 = v2;
}

point line::get_v1() {
    return v1;
}

point line::get_v2() {
    return v2;
}

void line::set_v1(point v1) {
    this->v1 = v1;
}

void line::set_v2(point v2) {
    this->v2 = v2;
}

double line::length() {
    return sqrt(pow((v2.get_x() - v1.get_x()), 2) + pow((v2.get_y() - v1.get_y()), 2));
}