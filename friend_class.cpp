// this code contains
// friend class
// code written and teseted on CLion 2018.1

#include <iostream>

class BaseClass {
    int id;

public:
    BaseClass(int id) : id(id) {
        std::cout << "Base Class Created" << std::endl;
    }

    void show_id() {
        std::cout << "Base Class ID is : " << id << std::endl;
    }

    friend class FriendClass;
};

class FriendClass {
public:
    FriendClass(BaseClass &b, int id) {
        b.id = id;
    }

    void show_id(BaseClass b) {
        std::cout << "Base Class ID is : " << b.id << std::endl;
    }
};

int main() {
    BaseClass b(55);
    b.show_id();
    FriendClass f(b, 46);
    b.show_id();
    f.show_id(b);

    std::cin.get();
}
