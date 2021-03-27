

#ifndef POINT_H
#define POINT_H

#include <iostream>

#include "shape.h"

class Point : public Shape {
   public:
    Point(){};
    Point(int x, int y);
    int get_x() { return m_x; }
    int get_y() { return m_y; }
    void print(std::ostream& os);

   protected:
    int m_x, m_y;
};

#endif