//
// Created by Maciej Płachta on 19.01.2022.
//

#include "../include/Player.h"

int Player::getMagic() const {
    return this->magic;
}

void Player::setMagic(int newMagic) {
    this->magic=newMagic;
}

void Player::die() {
    //Zjebałeś, spróbuj ponownie
}

void Player::heal() {
    setCurrentHP(getCurrentHP()+getMaxHP()/4);
}