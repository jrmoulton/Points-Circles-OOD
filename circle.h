

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

#include "point.h"

class Circle : public Point {
   public:
    Circle(){};
    Circle(int x, int y, int radius);
    Circle(Point point, int radius);
    int get_radius() { return m_radius; }
    friend std::ostream& operator<<(std::ostream& os, const Circle& c);

   protected:
    int m_radius;
    float m_area;
};

#endif