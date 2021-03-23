

#include "circle.h"

#include "point.h"
#define PI 3.14159

/*
Summary: Constructor for a circle with x and y coordinates and a radius
Begin:
   set variables
   set area to pi * radius^2
End
*/
Circle::Circle(int x, int y, int radius) : Point(x, y), m_radius(radius) {
    m_area = PI * (radius * radius);  // set area to pi * radius^2
}

/*
Summary: Constructor for a circle with a point and a radius
Begin:
   set variables
   set area to pi * radius^2
End
*/
Circle::Circle(Point point, int radius) : Point(point), m_radius(radius) {
    m_area = PI * (radius * radius);
}

/*
Summary: Overloaded shift operator to print a circle
Begin:
   print circle center, radius and area
End
*/
std::ostream& operator<<(std::ostream& os, const Circle& c) {
    // print circle center, radius and area
    os << "Circle with center = (" << c.m_x << ", " << c.m_y << ")"
       << "; "
       << "Radius = " << c.m_radius << "; "
       << "Area = " << c.m_area;
    return os;
}