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

void Character::setMaxHP(int newMaxHP) {
    this->maxHP=newMaxHP;
}

void Character::setStrength(int newStrength) {
    this->strength=newStrength;
}

void Character::setDexterity(int newDexterity) {
    this->dexterity=newDexterity;
}

void Character::setDefense(int newDefense) {
    this->defense=newDefense;
}

void Character::setLuck(int newLuck) {
    this->luck=newLuck;
}

void Character::setCurrentHP(int newCurrentHP) {
    if(newCurrentHP>this->maxHP){
        this->currentHP=this->maxHP;
    }
    else if(newCurrentHP<=0){
        die();
    }
    else{
        this->currentHP=newCurrentHP;
    }
}
