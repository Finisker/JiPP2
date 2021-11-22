//
// Created by milky on 22.11.2021.
//

#include "../include/Triangle.h"

Triangle::Triangle(string name, string colour, double a, double b, double c) : a(a), b(b), c(c){
    this->name = name;
    this->colour = colour;
}

double Triangle::getA() {
    return a;
}

double Triangle::getB() {
    return b;
}

double Triangle::getC() {
    return c;
}

void Triangle::setA(double a) {
    this->a = a;
}

void Triangle::setB(double b) {
    this->b = b;
}

void Triangle::setC(double c) {
    this->c = c;
}

double Triangle::getCircumference() {
    return a+b+c;
}

double Triangle::getArea() {
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
