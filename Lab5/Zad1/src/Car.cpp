//
// Created by milky on 08.11.2021.
//

#include "../include/Car.h"

Car::Car(int registrationNumber, int seatsNumber, string name, string markAndType) {
    this->registrationNumber = registrationNumber;
    this->seatsNumber = seatsNumber;
    this->name = name;
    this->markAndType = markAndType;
    for (int i = 0; i < seatsNumber; ++i) {
        passengers[i] = "Puste";
    }
}

void Car::print() {
    cout << "Nazwa: " << name << endl <<
         "Marka i typ: " << markAndType << endl
         << "Numer rejestracyjny: " << registrationNumber << endl
         << "Ilość miejsc: " << seatsNumber << endl;

    for (int i = 0; i < seatsNumber; ++i) {
        cout << "Pasażer " << i + 1 << " : " << passengers[i] << endl;
    }
}

