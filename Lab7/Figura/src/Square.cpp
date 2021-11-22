//
// Created by milky on 22.11.2021.
//

#include "../include/Square.h"

Square::Square(string name, string colour, double a) : a(a){
    this->name = name;
    this->colour = colour;
}

double Square::getA() {
    return a;
}

void Square::setA(double a) {
    this->a = a;
}

double Square::getCircumference() {
    return 4*a;
}

double Square::getArea() {
    return pow(a,2);
}
