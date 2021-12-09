//
// Created by milky on 22.11.2021.
//

#ifndef JIPP2_TRIANGLE_H
#define JIPP2_TRIANGLE_H

#include "Figura.h"

class Triangle : public Figura {
private:
    double a;
    double b;
    double c;

public:
    Triangle(string name, string colour, double a, double b, double c);

    double getA();

    double getB();

    double getC();

    void setA(double a);

    void setB(double b);

    void setC(double c);

    double getCircumference();

    double getArea();
};


#endif //JIPP2_TRIANGLE_H
