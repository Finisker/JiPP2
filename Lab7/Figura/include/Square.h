//
// Created by milky on 22.11.2021.
//

#ifndef JIPP2_SQUARE_H
#define JIPP2_SQUARE_H

#include "Figura.h"

class Square : public Figura {
private:
    double a;

public:
public:
    Square(string name, string colour, double a);

    double getA();

    void setA(double a);

    double getCircumference();

    double getArea();
};


#endif //JIPP2_SQUARE_H
