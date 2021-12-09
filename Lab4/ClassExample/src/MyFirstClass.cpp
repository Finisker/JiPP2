//
// Created by milky on 25.10.2021.
//

#include "../include/MyFirstClass.h"

void MyFirstClass::readAnswear() {
    cin >> answer;
}

void MyFirstClass::printQuestion() {
    cout << question << endl;
};

void MyFirstClass::askUser() {
    printQuestion();
    readAnswear();
}

MyFirstClass::MyFirstClass(string firstName, string secondName, string answear, string question, short points)
        : secondName(secondName), question(question), points(points), answer(answear) {
    this->firstName = firstName;
}

string MyFirstClass::getQuestion() {
    return question;
}

void MyFirstClass::setPoints() {
    this->points = points;
}
