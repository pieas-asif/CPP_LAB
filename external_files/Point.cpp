//
// Created by asif on 4/3/18.
//

#include "Point.h"
#include <iostream>

Point::Point() {
    x = 0;
    y = 0;
}

void Point::modifyPoint(float x, float y) {
    this->x += x;
    this->y += y;
}

void Point::showPoint() {
    std::cout << "x = " << x;
    std::cout << ", y = " << y << std::endl;
}