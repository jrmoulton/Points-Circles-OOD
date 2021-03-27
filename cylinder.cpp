
#include "cylinder.h"

#include "circle.h"
#include "point.h"

/*
Summary: Constructor for a cylinder with x and y coordinates, a radius, and
            a height
Begin:
   set variables
   set volume to area * height
End
*/
Cylinder::Cylinder(int x, int y, int radius, int height)
    : Circle(x, y, radius), m_height(height) {
    m_volume = m_area * height;  // set volume to area * heigh2
}

/*
Summary: Constructor for a cylinder with a point, a radius, and a height
Begin:
   set variables
   set volume to area * height
End
*/
Cylinder::Cylinder(Point point, int radius, int height)
    : Circle(point, radius), m_height(height) {
    m_volume = m_area * height;  // set volume to area * height
}

/*
Summary: Constructor for a cylinder with a circle and a height
Begin:
   set variables
   set volume to area * height
End
*/
Cylinder::Cylinder(Circle circle, int height)
    : Circle(circle), m_height(height) {
    m_volume = m_area * height;  // set volume to area * height
}

/*
Summary: Overloaded print function to print a cylinder
Begin:
   print the cylinder center, radius, height and volume
End
*/
void Cylinder::print(std::ostream& os) {
    os << "Cylinder with center = (" << this->m_x << ", " << this->m_y << ")"
       << "; "
       << "Radius = " << this->m_radius << "; "
       << "Height = " << this->m_height << "; "
       << "Volume = " << this->m_volume;
}
