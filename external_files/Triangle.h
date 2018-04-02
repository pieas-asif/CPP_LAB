//
// Created by asif on 4/3/18.
//

#ifndef PRAC_TRIANGLE_H
#define PRAC_TRIANGLE_H

#include "Point.h"

class Triangle {
public:
    Point A, B, C;
    Triangle();
    void modifyTriangle(float a, float b);
    void area();
};

#endif //PRAC_TRIANGLE_H
