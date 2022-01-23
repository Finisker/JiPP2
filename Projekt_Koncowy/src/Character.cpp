//
// Created by Maciej Płachta on 19.01.2022.
//

#include "../include/Character.h"

#include <utility>

Character::Character(string name, vector<int> statsVector) {

    this->name = move(name);
    this->gold = statsVector.back();
    statsVector.pop_back();
    this->maxDmg = statsVector.back();
    statsVector.pop_back();
    this->minDmg = statsVector.back();
    statsVector.pop_back();
    this->luck = statsVector.back();
    statsVector.pop_back();
    this->defense = statsVector.back();
    statsVector.pop_back();
    this->dexterity = statsVector.back();
    statsVector.pop_back();
    this->strength = statsVector.back();
    statsVector.pop_back();
    this->currentHP = statsVector.back();
    statsVector.pop_back();
    this->maxHP = statsVector.back();
    statsVector.pop_back();
}

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

string Character::getName() const {
    return this->name;
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

int Character::criticalValue() const {
    srand(time(nullptr));
    int tmp = rand() % 100;
    if (this->luck * 3 >= tmp) {
        return 3;
    }
    return 1;
}

int Character::attack() const {
    if(!this->attackHit()){
        return 0;
    }
    srand(time(nullptr));
    int damage = rand() % (this->maxDmg - this->minDmg + 1) + this->minDmg;

    return (damage + this->strength*2) * this->criticalValue();
}

bool Character::attackHit() const {
    srand(time(nullptr));
    int tmp = rand() % 100;
    if (this->dexterity * 7 >= tmp) {
        return true;
    }
    return false;
}

bool Character::dodge() const {
    srand(time(nullptr));
    int tmp = rand() % 100;
    if (this->dexterity * 2 >= tmp) {
        return true;
    }
    return false;
}

bool Character::getHit(int damage) {
    if(!dodge()){
        int damageTaken = damage - defense/2;
        if(damageTaken>0){
            if(damageTaken>=this->currentHP){
                return true;
            }
            this->currentHP-=damageTaken;
        }
    }
    return false;
}




