

#include "point.h"

// Summary: Constructor for a point with x and y coordinates
Point::Point(int x, int y) : m_x(x), m_y(y){};

/*
Summary: Overlaoded shift operator to print out the point
Begin:
   Print the point with text
End
*/
std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "Point at (" << p.m_x << ", " << p.m_y << ")";
    return os;
}