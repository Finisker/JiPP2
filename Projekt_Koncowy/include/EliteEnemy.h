//
// Created by Maciej Płachta on 23.01.2022.
//

#ifndef JIPP2_ELITEENEMY_H
#define JIPP2_ELITEENEMY_H

#include "Character.h"

class EliteEnemy : public Character {
public:
/**
 * Constructor for EliteEnemy class
 * @param name - name of a EliteEnemy class object
 * @param statArray array of 9 int elements representing each field of a Character class
 */
    EliteEnemy(string name, vector<int> statsVector);

/**
 * Checks for critical hit
 * @return critical multiplier, times 1 or times 5
 */
    int criticalValue() const override;
};


#endif //JIPP2_ELITEENEMY_H
