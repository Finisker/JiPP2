//
// Created by Maciej Płachta on 19.01.2022.
//

#ifndef KONCOWY_PLAYER_H
#define KONCOWY_PLAYER_H

#include "Character.h"

using namespace std;

class Player : public Character {
private:
    string playerClass;
    int magic;
public:

/**
 * Constructor for Player subclass
 * @param name - name of a Player class object
 * @param statArray - array of 9 int elements representing each field of a Character class
 * @param magic - int representing magic field of Player subclass
 */
    Player(string name, vector<int> statsVector, int magic);

/**
 * Standard getters
 */
    string getPlayerClass() const;

    int getMagic() const;

/**
 * Standard setters
 */
    void setMagic(int newMagic);

    void setPlayerClass(string newPlayerClass);

/**
 * Heals player for magic*2
 */
    void heal();
};


#endif //KONCOWY_PLAYER_H
