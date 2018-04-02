// this code contains
// string copy
// string concatination
// string lenght
// string upper (not completed)
// string lower (not completed)
// string checking
// all using string
// code written and tested on CLion 2018.1

#include <iostream>
#include <string>

int main() {
    std::string str1;
    std::string str2;
    std::string str3;

    // string copy
    std::cout << "Enter a string : ";
    std::getline(std::cin, str1);

    std::cout << "Enter another string : ";
    std::getline(std::cin, str2);

    str1 = str2; // copying str2 into str1

    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;

    // string concatenation
    std::cout << "Enter a string : ";
    std::getline(std::cin, str1);

    std::cout << "Enter another string : ";
    std::getline(std::cin, str2);

    str3 = str1 + str2; // concatenating str1 and str2 and save into str3

    std::cout << str3 << std::endl;

    // string length
    std::cout << "The length of the string is " << str3.length() << std::endl;

    // string upper
    // can't do them
    // string lower
    // can't do them

    // string compare
    std::cout << "Enter a string : ";
    std::getline(std::cin, str1);

    std::cout << "Enter another string : ";
    std::getline(std::cin, str2);

    if(str1 == str2) {
        std::cout << "They are same" << std::endl;
    } else {
        std::cout << "They are not same" << std::endl;
    }

    std::cin.get();
}
