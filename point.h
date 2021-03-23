

#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
   public:
    Point(){};
    Point(int x, int y);
    int get_x() { return m_x; }
    int get_y() { return m_y; }

    friend std::ostream& operator<<(std::ostream& os, const Point& p);

   protected:
    int m_x, m_y;
};

#endif