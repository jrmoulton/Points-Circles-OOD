
#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>

#include "circle.h"

class Cylinder : public Circle {
   public:
    Cylinder(){};
    Cylinder(int x, int y, int radius, int height);
    Cylinder(Point point, int radius, int height);
    Cylinder(Circle circle, int height);
    void print(std::ostream& os);

   protected:
    int m_height;
    float m_volume;
};

#endif