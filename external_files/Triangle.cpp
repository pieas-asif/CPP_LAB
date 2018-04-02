//
// Created by asif on 4/3/18.
//

#include "Triangle.h"
#include <iostream>

Triangle::Triangle() {
    std::cout << "Triangle Created" << std::endl;
}

void Triangle::modifyTriangle(float a, float b) {
    A.modifyPoint(a, b);
    B.modifyPoint(a, b);
    C.modifyPoint(a, b);
}

void Triangle::area() {
    float area = (A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) / 2;
    if (area < 0) {
        area *= -1;
    }

    std::cout << "Triangle area is : " << area << std::endl;
}
