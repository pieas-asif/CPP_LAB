// this code contains
// string copy
// string concatination
// string lenght
// string upper
// string lower
// string checking
// all using cstring
// code written and tested on CLion 2018.1


#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    char str1[100];
    char str2[100];
    char str3[100];
    int i;

    // string copy

    std::cout << "Enter a string : ";
    gets(str1);

    std::cout << "Enter another string : ";
    gets(str2);

    strcpy(str1, str2); // copy str2 into str 1


    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;

    // string concatenation

    std::cout << "Enter a string : ";
    gets(str1);

    std::cout << "Enter another string : ";
    gets(str2);

    strcpy(str3, str1); // copy str1 into str3
    strcat(str3, str2); // adding/concatenating str2 at the end of str3

    std::cout << str3 << std::endl;

    // string length

    std::cout << "Length of the string is " << strlen(str3) << std::endl; // getting a strings length

    // string upper
    // strupr() will not work
    // std::cout << "Upper case string is " << strupr(str3) << std::endl;
    // but there is a workaround
    for(i = 0; str3[i] != '\0'; i++) {
        if(str3[i] >= 97 && str3[i] <= 122) {
            printf("%c", str3[i]-32);
        } else {
            printf("%c", str3[i]);
        }
    }
    std::cout << std::endl;

    // string lower
    // strlwr() will not work
    // std::cout << "Upper case string is " << strlwr(str3) << std::endl;
    // but there is a workaround
    for(i = 0; str3[i] != '\0'; i++) {
        if(str3[i] >= 65 && str3[i] <= 90) {
            printf("%c", str3[i]+32);
        } else {
            printf("%c", str3[i]);
        }
    }
    std::cout << std::endl;

    // string compare

    std::cout << "Enter a string : ";
    gets(str1);

    std::cout << "Enter another string : ";
    gets(str2);

    if(strcmp(str1, str2) == 0) {
        std::cout << "STR1 and STR2 are same" << std::endl;
    } else if (strcmp(str1, str2) > 0) {
        std::cout << "They are not same and STR1 is Greater" << std::endl;
    } else {
        std::cout << "They are not same and STR2 is Greater" << std::endl;
    }

    std::cin.get();
}
