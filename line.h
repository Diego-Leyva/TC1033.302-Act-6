#ifndef LINE_H
#define LINE_H
#include "point.h"

class line {
    point v1, v2;

    public:
        line(point v1, point v2);
        
        point get_v1();
        point get_v2();
        
        void set_v1(point v1);
        void set_v2(point v2);

        double length();
};

#endif