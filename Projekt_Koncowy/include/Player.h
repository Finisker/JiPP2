//
// Created by Maciej Płachta on 19.01.2022.
//

#ifndef KONCOWY_PLAYER_H
#define KONCOWY_PLAYER_H

#include "Character.h"

class Player : public Character {
private:
    int magic;
public:
/**
 * Standard getters
 */
    int getMagic() const;

/**
 * Standard setters
 */
    void setMagic(int newMagic);

/**
 * Triggers death event
 */
    void die();

/**
 * Heals player for 25% max HP
 * @return
 */
    void heal();
};


#endif //KONCOWY_PLAYER_H
