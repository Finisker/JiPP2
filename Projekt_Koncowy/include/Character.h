//
// Created by Maciej Płachta on 19.01.2022.
//

#ifndef KONCOWY_CHARACTER_H
#define KONCOWY_CHARACTER_H


class Character {
private:
    int maxHP;
    int currentHP;
    int strength;
    int dexterity;
    int defense;
    int luck;

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

/**
 * Standard setters
 */
    void setMaxHP(int newMaxHP);
    void setStrength(int newStrength);
    void setDexterity(int newDexterity);
    void setDefense(int newDefense);
    void setLuck(int newLuck);

/**
 * Standard setter but makes sure currentHP<=maxHP and checks for death
 */
    void setCurrentHP(int newCurrentHP);
/**
 * Triggers character death event
 */
    virtual void die();
};


#endif //KONCOWY_CHARACTER_H
