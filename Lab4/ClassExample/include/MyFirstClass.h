//
// Created by milky on 25.10.2021.
//

#ifndef CLASS_MYFIRSTCLASS_H
#define CLASS_MYFIRSTCLASS_H

#include <string>
#include "iostream"
using namespace std;

class MyFirstClass {
private:
    string firstName;
    string secondName;
    string answer;
    string question = "No question";
    short points;

    void readAnswear();

public:

    MyFirstClass(string firstName, string secondName, string answear, string question, short points);

    void printQuestion();

    void askUser();

    string getQuestion();

    void setPoints();
};


#endif //CLASS_MYFIRSTCLASS_H
