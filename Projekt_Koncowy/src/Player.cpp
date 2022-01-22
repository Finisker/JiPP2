//
// Created by Maciej Płachta on 19.01.2022.
//

#include "../include/Player.h"

int Player::getMagic() const {
    return this->magic;
}

void Player::setMagic(int newMagic) {
    this->magic = newMagic;
}

void Player::die() {
    //Zjebałeś, spróbuj ponownie
}

void Player::heal() {
    setCurrentHP(getCurrentHP() + getMaxHP() / 4);
}

Player::Player(string name,vector<int> statsVector, int magic) : Character(move(name),move(statsVector)) {
    this->magic = magic;
}

string Player::getPlayerClass() const {
    return this->playerClass;
}

void Player::setPlayerClass(string newPlayerClass) {
    this->playerClass=move(newPlayerClass);
}
