// this code contains
// simple class
// with dot and arrow oparetor
// code written and tested on CLion 2018.1

#include <iostream>

class Student {
    int id;

public:
    Student(int id) : id(id) {}
    void showId() { std::cout << id << std::endl; }
};

int main() {
    Student s1(46);
    s1.showId();

    Student * s2 = new Student(55);
    s2->showId();

    std::cin.get();
}
