#pragma once
#include "point.h"
#include "line.h"

class triangle {
    point v1, v2, v3;
    line l1, l2, l3;
    
    public:
        triangle(point v1, point v2, point v3);

        point get_v1();
        point get_v2();
        point get_v3();

        void set_v1(point v1);
        void set_v2(point v2);
        void set_v3(point v3);
        void update_lines();

        double perimeter();
        double area();
};