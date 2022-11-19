#include "triangle.h"
#include "cmath"

triangle::triangle(point v1, point v2, point v3) {
    this->v1 = v1;
    this->v2 = v2;
    this->v3 = v3;
    update_lines();
}

point triangle::get_v1() {
    return v1;
}

point triangle::get_v2() {
    return v2;
}

point triangle::get_v3() {
    return v3;
}

void triangle::set_v1(point v1) {
    this->v1 = v1;
    update_lines();
}

void triangle::set_v2(point v2) {
    this->v2 = v2;
    update_lines();
}

void triangle::set_v3(point v3) {
    this->v3 = v3;
    update_lines();
}

void triangle::update_lines() {
    l1 = line(v1, v2);
    l2 = line(v2, v3);
    l3 = line(v3, v1);
}

double triangle::perimeter() {
    return l1.length() + l2.length() + l3.length(); 
}

double triangle::area() {
    double s_perimeter = perimeter()/2;
    return sqrt(s_perimeter * (s_perimeter - l1.length()) * (s_perimeter - l2.length()) * (s_perimeter - l3.length()));
}