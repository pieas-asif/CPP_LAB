// this code contains
// switch case using int and char
// code written and tested on CLion 2018.1

#include <iostream>

int main() {
    // switch using int
    int a;
    std::cin >> a;

    switch(a) {
        case 1:
            std::cout << "You choose 1" << std::endl;
            break;
        case 2:
            std::cout << "You choose 2" << std::endl;
            break;
        default:
            std::cout << "You did not choose 1 or 2" << std::endl;
            break;
    }

    // switch using char
    char b;
    std::cin >> b;

    switch(b) {
        case 'a':
            std::cout << "You choose 'a'" << std::endl;
            break;
        case 'b':
            std::cout << "You choose 'b'" << std::endl;
            break;
        default:
            std::cout << "You did not choose 'a' or 'b'" << std::endl;
            break;
    }

    std::cin.get();
}
