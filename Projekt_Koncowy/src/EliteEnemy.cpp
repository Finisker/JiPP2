//
// Created by Maciej Płachta on 23.01.2022.
//

#include "EliteEnemy.h"
#include <iostream>
#include <utility>

int EliteEnemy::criticalValue() const {
    srand(time(nullptr));
    int tmp = rand() % 100;
    if (this->getLuck() * 3 >= tmp) {
        return 5;
    }
    return 1;
}

EliteEnemy::EliteEnemy(string name, vector<int> statsVector) : Character(move(name), move(statsVector)) {}
