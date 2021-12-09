//
// Created by milky on 15.11.2021.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include <iostream>
#include <cmath>

using namespace std;


class Vector {
private:
    double x{0};
    double y{0};

public:
    Vector();

    Vector(double x, double y);

    double length();

    void print() const;

    Vector operator+(const Vector &rhs) const;

    Vector &operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs) const;

    Vector &operator-=(const Vector &rhs);

    Vector &operator!() const;

    double operator*(const Vector &rhs) const;

    Vector operator*(double rhs) const;

    bool operator==(const Vector &rhs) const;
};


#endif //VECTOR_VECTOR_H
