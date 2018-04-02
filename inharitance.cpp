#include <iostream>

class BaseClass {
    int id;
    float width;

public:
    void set_id(int id) {
        this->id = id;
    }

    void set_width(float width) {
        this->width = width;
    }

    void show_info() {
        std::cout << id << " " << width << std::endl;
    }
};

class InheritedClass : public BaseClass {
    int value;

public:
    void set_value(int value) {
        this->value = value;
    }

    void show_value() {
        std::cout << value << std::endl;
    }
};

int main() {
    BaseClass b;
    b.set_id(46);
    b.set_width(2.2f);
    b.show_info();

    InheritedClass i;
    i.set_id(55);
    i.set_width(1.76f);
    i.set_value(101);
    i.show_info();
    i.show_value();

    std::cin.get();
}
