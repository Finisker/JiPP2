//
// Created by milky on 22.11.2021.
//

#ifndef JIPP2_RECTANGLE_H
#define JIPP2_RECTANGLE_H

#include "Figura.h"

class Rectangle : public Figura{
private:
    double a;
    double b;

public:
    Rectangle(string name, string colour, double a, double b);
    double getA();
    double getB();
    void setA(double a);
    void setB(double b);
    double getCircumference();
    double getArea();
};


#endif //JIPP2_RECTANGLE_H
