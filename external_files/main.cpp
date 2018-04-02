#include <iostream>
#include "Triangle.h"

int main() {
    Triangle new_triangle;

    new_triangle.A.x = 0.2f;
    new_triangle.A.y = 1.4f;
    new_triangle.B.x = 2.2f;
    new_triangle.B.y = 1.5f;
    new_triangle.C.x = 3.6f;
    new_triangle.C.y = 4.1f;

    new_triangle.A.modifyPoint(1.0f, 1.0f);
    std::cout << "Triangle A Point: ";
    new_triangle.A.showPoint();

    new_triangle.modifyTriangle(1.0f, 1.0f);

    std::cout << "Triangle A Point: ";
    new_triangle.A.showPoint();
    std::cout << "Triangle B Point: ";
    new_triangle.B.showPoint();
    std::cout << "Triangle C Point: ";
    new_triangle.C.showPoint();

    new_triangle.area();

    std::cin.get();
}