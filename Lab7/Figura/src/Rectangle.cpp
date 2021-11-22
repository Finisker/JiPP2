//
// Created by milky on 22.11.2021.
//

#include "../include/Rectangle.h"

Rectangle::Rectangle(string name, string colour, double a, double b) : a(a), b(b){
    this->name = name;
    this->colour = colour;
}

double Rectangle::getA() {
    return a;
}

double Rectangle::getB() {
    return b;
}

void Rectangle::setA(double a) {
    this->a = a;
}

void Rectangle::setB(double b) {
    this->b = b;
}

double Rectangle::getCircumference() {
    return 2*a + 2*b;
}

double Rectangle::getArea() {
    return a*b;
}

