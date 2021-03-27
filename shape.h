
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
class Shape {
   protected:
    virtual void print(std::ostream& os){};

   public:
    friend std::ostream& operator<<(std::ostream& os, Shape& p) {
        p.print(os);
        return os;
    }
};

#endif