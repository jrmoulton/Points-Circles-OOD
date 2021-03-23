#include <iostream>

#include "circle.h"
#include "cylinder.h"
#include "point.h"
using namespace std;
int main() {
    Point p(4, 4);           // x coordinate, y coordinate
    Circle c(5, 5, 5);       // x, y, radius
    Cylinder y(6, 6, 6, 6);  // x, y, r, height

    cout << p << endl << endl;
    cout << c << " " << endl << (Point)c << endl << endl;
    cout << y << " " << endl
         << (Circle)y << " " << endl
         << (Point)y << endl
         << endl;
    return 0;
}