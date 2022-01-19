//
// Created by Maciej Płachta on 19.01.2022.
//

#include "../include/Character.h"

int Character::getMaxHP() const {
    return this->maxHP;
}

int Character::getCurrentHP() const {
    return this->currentHP;
}

int Character::getStrength() const {
    return this->strength;
}

int Character::getDexterity() const {
    return this->dexterity;
}

int Character::getDefense() const {
    return this->defense;
}

int Character::getLuck() const {
    return this->luck;
}

int Character::getGold() const {
    return this->gold;
}

int Character::getMinDmg() const {
    return this->minDmg;
}

int Character::getMaxDmg() const {
    return this->maxDmg;
}

void Character::setMaxHP(int newMaxHP) {
    this->maxHP = newMaxHP;
}

void Character::setStrength(int newStrength) {
    this->strength = newStrength;
}

void Character::setDexterity(int newDexterity) {
    this->dexterity = newDexterity;
}

void Character::setDefense(int newDefense) {
    this->defense = newDefense;
}

void Character::setLuck(int newLuck) {
    this->luck = newLuck;
}

void Character::setCurrentHP(int newCurrentHP) {
    if (newCurrentHP > this->maxHP) {
        this->currentHP = this->maxHP;
    } else {
        this->currentHP = newCurrentHP;
    }
}

void Character::setGold(int newGold) {
    this->gold = newGold;
}

void Character::setMinDmg(int newMinDmg) {
    this->minDmg = newMinDmg;
}

void Character::setMaxDmg(int newMaxDmg) {
    this->maxDmg = newMaxDmg;
}

int Character::critical() const {
    int tmp = rand() % 100;
    if (this->luck * 3 >= tmp) {
        return 3;
    }

    return 1;
}

int Character::attack() {

    int hit = rand() % 100;
    if (this->dexterity * 5 < hit) {
        return 0;
    }

    int damage = rand() % (this->maxDmg - this->minDmg + 1) + this->minDmg;

    return (damage + this->strength) * critical();
}