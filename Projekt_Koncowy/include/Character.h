//
// Created by Maciej Płachta on 19.01.2022.
//

#ifndef KONCOWY_CHARACTER_H
#define KONCOWY_CHARACTER_H

#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class Character {
private:
    string name;
    int maxHP;
    int currentHP;
    int strength;
    int dexterity;
    int defense;
    int luck;
    int minDmg;
    int maxDmg;
    int gold;
    int *iDontNeedThisOneButDestructorNeededToBeUsed;

public:
/**
 * Constructor for Character class
 * @param name - name of a Character class object
 * @param statArray array of 9 int elements representing each field of a Character class
 */
    Character(string name, vector<int> statsVector);

/**
 * Destructor for Character class, deletes iDontNeedThisOneButDestructorNeededToBeUsed
 */
    ~Character();

/**
 * Standard getters
 */
    string getName() const;

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
    void setName(string newName);

    void setMaxHP(int newMaxHP);

    void setStrength(int newStrength);

    void setDexterity(int newDexterity);

    void setDefense(int newDefense);

    void setLuck(int newLuck);

    void setGold(int newGold);

    void setMinDmg(int newMinDmg);

    void setMaxDmg(int newMaxDmg);

/**
 * Standard setter but makes sure currentHP<=maxHP
 */
    void setCurrentHP(int newCurrentHP);

/**
 * Checks for critical hit
 * @return critical multiplier, times 1 or times 3
 */
    virtual int criticalValue() const;

/**
 * Checks if attack hit
 * @return true for hit, false for miss
 */
    bool attackHit() const;

/**
 *  Calculates damage from attack
 * @return amount of damage taken by player
 */
    int attack() const;

/**
 * Checks if attack was dodged
 * @return true for dodge, false for hit
 */
    bool dodge() const;

/**
 * Calculates damage taken
 * @param damage - flat damage dealt
 * @return true if character died after attack
 */
    bool getHit(int damage);

    bool getHit(short damage);

/**
 * Checks if two objects of Character class have the same name
 * @param character - second Character class object
 * @return true for the same name, false for different
 */
    bool operator==(const Character &character);
};


#endif //KONCOWY_CHARACTER_H
