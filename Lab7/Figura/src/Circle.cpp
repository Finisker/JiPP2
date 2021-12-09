//
// Created by milky on 22.11.2021.
//

#include "../include/Circle.h"

Circle::Circle(string name, string colour, double r) : r(r) {
    this->name = name;
    this->colour = colour;
}

double Circle::getR() {
    return r;
}

void Circle::setR(double r) {
    this->r = r;
}

double Circle::getCircumference() {
    return 2 * M_PI * r;
}

double Circle::getArea() {
    return pow(r, 2) * M_PI;
}


