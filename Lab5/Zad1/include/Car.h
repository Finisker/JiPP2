//
// Created by milky on 08.11.2021.
//

#ifndef JIPP2_CAR_H
#define JIPP2_CAR_H

#include "iostream"
#include "cstring"

using namespace std;

class Car {
private:
    int registrationNumber;
    int seatsNumber;

    string name;
    string markAndType;

    string *passengers = new string[seatsNumber];

public:
    Car(int registrationNumber, int seatsNumber, string name, string markAndType);

    void print();
};


#endif //JIPP2_CAR_H
