#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"

class triangle {
    point v1, v2, v3;
    
    public:
        triangle(point v1, point v2, point v3);

        point get_v1();
        point get_v2();
        point get_v3();

        void set_v1();
        void set_v2();
        void set_v3();

        double perimeter();
        double area();
};

#endif
