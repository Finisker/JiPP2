//
// Created by Maciej Płachta on 19.01.2022.
//

#ifndef KONCOWY_CHARACTER_H
#define KONCOWY_CHARACTER_H

#include <cstdlib>

class Character {
private:
    int maxHP;
    int currentHP;
    int strength;
    int dexterity;
    int defense;
    int luck;
    int minDmg;
    int maxDmg;
    int gold;

public:

/**
 * Standard getters
 */
    int getMaxHP() const;

    int getCurrentHP() const;

    int getStrength() const;

    int getDexterity() const;

    int getDefense() const;

    int getLuck() const;

    int getGold() const;

    int getMinDmg() const;

    int getMaxDmg() const;

/**
 * Standard setters
 */
    void setMaxHP(int newMaxHP);

    void setStrength(int newStrength);

    void setDexterity(int newDexterity);

    void setDefense(int newDefense);

    void setLuck(int newLuck);

    void setGold(int newGold);

    void setMinDmg(int newMinDmg);

    void setMaxDmg(int newMaxDmg);

/**
 * Standard setter but makes sure currentHP<=maxHP and checks for death
 */
    void setCurrentHP(int newCurrentHP);

/**
 * Checks for isCritical hit
 * @return critical multiplier
 */
    int critical() const;

/**
 *  Calculates damage from attack
 * @return amount of damage taken by player
 */
    int attack();
};


#endif //KONCOWY_CHARACTER_H
