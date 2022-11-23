#pragma once

class point {
    double x, y;

    public:
        point();
        point(double x, double y);
        
        double get_x();
        double get_y();

        void set_x(double x);
        void set_y(double y);

        double distance(point p);
};