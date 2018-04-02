// this code contains
// friend function
// code written and teseted on CLion 2018.1

#include <iostream>

class baseClass {
    int id;

public:
    baseClass(int id) : id(id) {
        std::cout << "Base Class Created" << std::endl;
    }

    void show_id() {
        std::cout << "Base Class ID is : " << id << std::endl;
    }

    friend void modify_base_class(baseClass b, int id);
};

void modify_base_class(baseClass b, int id) {
    b.id = id;
    b.show_id();
}

int main() {
    baseClass b(55);
    b.show_id();
    modify_base_class(b, 46); // this will not change the actual value on main function, because its passing by value, not reference
    b.show_id();  // value wasn't changed

    std::cin.get();
}
