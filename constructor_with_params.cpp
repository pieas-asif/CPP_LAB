// this code contains
// constructor with params
// code written and tested on CLion 2018.1

#include <iostream>

class Car {
    float top_speed;
    float weight;
    float price;
    float acceleration;
    int number_of_seat;

public:
    Car(float top_speed, float weight, float price, float acceleration, int number_of_seat)
            : top_speed(top_speed),
              weight(weight),
              price(price),
              acceleration(acceleration),
              number_of_seat(number_of_seat)
    {
        std::cout << "Car Created" << std::endl;
    }

    void carInfo() {
        std::cout << "Number Of Seat : " << number_of_seat << std::endl;
        std::cout << "Top Speed : " << top_speed << std::endl;
        std::cout << "Weight : " << weight << std::endl;
        std::cout << "Acceleration : " << acceleration << std::endl;
        std::cout << "Car Price : " << price << std::endl;
    }
};

int main() {
    Car familyCar(202.2f, 200.0f, 15999.99f, 45.02f, 4);

    familyCar.carInfo();

    std::cin.get();
}
