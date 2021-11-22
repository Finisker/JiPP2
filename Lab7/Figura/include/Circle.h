//
// Created by milky on 22.11.2021.
//

#ifndef JIPP2_CIRCLE_H
#define JIPP2_CIRCLE_H

#include "Figura.h"


class Circle: public Figura{
private:
    double r;

public:
    Circle(string name, string colour, double r);
    double getR();
    void setR(double r);
    double getCircumference();
    double getArea();
};


#endif //JIPP2_CIRCLE_H
