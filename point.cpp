

#include "point.h"

// Summary: Constructor for a point with x and y coordinates
Point::Point(int x, int y) : m_x(x), m_y(y){};

/*
Summary: Overlaoded print function to print out the point
Begin:
   Print the point with text
End
*/
void Point::print(std::ostream& os) {
    os << "Point at (" << this->m_x << ", " << this->m_y << ")";
}