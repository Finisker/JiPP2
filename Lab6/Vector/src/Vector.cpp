//
// Created by milky on 15.11.2021.
//

#include "../include/Vector.h"


Vector::Vector() = default;

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

void Vector::print() const {
    cout << "[" << this->x << "," << this->y << "]\n";
}

Vector Vector::operator+(const Vector &rhs) const {
    Vector final = Vector(this->x + rhs.x, this->y + rhs.y);
    return final;
}

Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const {
    Vector final = Vector(this->x - rhs.x, this->y - rhs.y);
    return final;
}

Vector &Vector::operator-=(const Vector &rhs) {
    this->x -= rhs.x;
    this->y -= rhs.y;
    return *this;
}

Vector &Vector::operator!() const {
    Vector final = Vector(this->x * -1, this->y * -1);
    return final;
}

double Vector::operator*(const Vector &rhs) const {
    return this->x * rhs.x + this->y * rhs.y;
}

Vector Vector::operator*(double rhs) const {
    Vector final = Vector(this->x * rhs, this->y * rhs);
    return final;
}

bool Vector::operator==(const Vector &rhs) const {
    return this->x == rhs.x && this->y == rhs.y;
}




