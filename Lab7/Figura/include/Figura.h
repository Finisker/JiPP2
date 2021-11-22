//
// Created by milky on 22.11.2021.
//

#ifndef FIGURA_FIGURA_H
#define FIGURA_FIGURA_H

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Figura {
protected:
    string name;
    string colour;

public:
    virtual double getCircumference() = 0;
    virtual double getArea() = 0;
};

#endif //FIGURA_FIGURA_H
