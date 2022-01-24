//
// Created by Maciej Płachta on 19.01.2022.
//

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <algorithm>
#include <fstream>
#include "Character.h"
#include "Player.h"
#include "EliteEnemy.h"

void clear();

void menu();

void options();

void leaderboard();

void classMenu();

void classWarrior();

void classRouge();

void classPriest();

void classKnight();

void classStudent();

void play(Player *player);

void showPlayer(Player *player);

void shop(Player *player);

void fight(Player *player);

void saveToLeaderboard(const string &name);

using namespace std;

template<typename T>
struct leaderboardStruct {
    string name;
    T points = 0;
};

int magic, difficulty, scoreCount = 0;
string command, className, filePath="leaderboard.txt";
vector<int> stats;
string enemyNames[] = {"Snail", "Squirrel", "Squid", "Bear", "Goblin", "Bandit", "Pikachu",
                       "Orc", "SO", "Big Ant", "Opossum", "Sleep Deprivation", "Addiction",
                       "Wolf", "Dragon", "Coffee Table"};

int main(int argc, char *argv[]) {
    if (argc > 1) {
        difficulty = stoi(argv[1]);
    } else {
        difficulty = 1;
    }

    menu();
    if (command == "..end") return 0;

    string playerName;
    cout << "Give us your name: ";
    getline(cin, playerName);
    auto *player = new Player(playerName, stats, magic);
    player->setPlayerClass(className);

    play(player);
    clear();
    cout << "Congratulations your score was " << scoreCount << endl
         << "Your score will be forever saved in a leaderboard";
    saveToLeaderboard(player->getName());

    return 0;
}

/**
 * Clears or make separators for different menus.
 * For Windows command prompt use system("cls")
 * For Linux use system("clear")
 * For Clion use cout.
 */
void clear() {
    //system("cls");
    //system("clear");
    cout << "\n------------------------------------------------------------\n" << endl;

}

/**
 * Shows the main menu on screen
 */
void menu() {
    int flag = 0;
    while (flag == 0) {
        clear();
        cout << "1. Start Game" << endl;
        cout << "2. Options" << endl;
        cout << "3. Leaderboard" << endl;
        cout << "4. Exit Game" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                classMenu();
                break;
            case 2:
                options();
                break;
            case 3:
                leaderboard();
                break;
            case 4:
                flag = 1;
                command = "..end";
                break;
            default:
                break;
        }
        if (command == "..abort") break;
    }
}

/**
 * Shows the option menu on screen
 */
void options() {
    int flag = 0;
    while (flag == 0) {
        clear();
        cout << "1. Option" << endl;
        cout << "2. Option" << endl;
        cout << "3. Back to menu" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                flag = 1;
                break;
            default:
                break;
        }
    }
}

/**
 * Shows the leaderboard on screen
 */
void leaderboard() {
    clear();
    cout << "Leaderboard" << endl;
    cout << "Name Score" << endl;
    string myLine;
    ifstream myFile(filePath);
    if(!myFile.is_open()){
        cout << "Press enter to continue";
        getchar();
        return;
    }
    while (getline(myFile, myLine)) {
        cout << myLine << endl;
    }
    myFile.close();
    cout << "Press enter to continue";
    getchar();
}

/**
 * Shows the class choice menu on screen
 */
void classMenu() {
    int flag = 0;
    while (flag == 0) {
        clear();
        cout << "Choose your class" << endl;
        cout << "1. Warrior" << endl;
        cout << "2. Rouge" << endl;
        cout << "3. Priest" << endl;
        cout << "4. Knight" << endl;
        cout << "5. Student" << endl;
        cout << "6. Back to menu" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                classWarrior();
                break;
            case 2:
                classRouge();
                break;
            case 3:
                classPriest();
                break;
            case 4:
                classKnight();
                break;
            case 5:
                classStudent();
                break;
            case 6:
                flag = 1;
                break;
            default:
                break;
        }
        if (command == "..abort") break;
    }
}

/**
 * Shows the specific class specification and choice menu
 */
void classWarrior() {
    int flag = 0;
    while (flag == 0) {
        clear();
        cout << "Warrior" << endl;
        cout << "Strength: 10" << endl;
        cout << "Dexterity: 5" << endl;
        cout << "Defense: 5" << endl;
        cout << "Luck: 1" << endl;
        cout << "Magic: 1" << endl;
        cout << "HP: 80" << endl;
        cout << "Starting gold: 50" << endl << endl;
        cout << "1. Back to class menu" << endl;
        cout << "2. Choose Warrior" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                flag = 1;
                break;
            case 2:
                className = "Warrior";
                stats.push_back(80);
                stats.push_back(80);
                stats.push_back(10);
                stats.push_back(5);
                stats.push_back(5);
                stats.push_back(1);
                stats.push_back(1);
                stats.push_back(5);
                stats.push_back(50);
                magic = 1;
                command = "..abort";
                break;
            default:
                break;
        }
        if (command == "..abort") break;
    }
}

void classRouge() {
    int flag = 0;
    while (flag == 0) {
        clear();
        cout << "Rouge" << endl;
        cout << "Strength: 5" << endl;
        cout << "Dexterity: 10" << endl;
        cout << "Defense: 5" << endl;
        cout << "Luck: 5" << endl;
        cout << "Magic: 1" << endl;
        cout << "HP: 60" << endl;
        cout << "Starting gold: 100" << endl << endl;
        cout << "1. Back to class menu" << endl;
        cout << "2. Choose Rouge" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                flag = 1;
                break;
            case 2:
                className = "Rouge";
                stats.push_back(60);
                stats.push_back(60);
                stats.push_back(5);
                stats.push_back(10);
                stats.push_back(5);
                stats.push_back(1);
                stats.push_back(1);
                stats.push_back(5);
                stats.push_back(100);
                magic = 1;
                command = "..abort";
                break;
            default:
                break;
        }
        if (command == "..abort") break;
    }
}

void classPriest() {
    int flag = 0;
    while (flag == 0) {
        clear();
        cout << "Priest" << endl;
        cout << "Strength: 1" << endl;
        cout << "Dexterity: 5" << endl;
        cout << "Defense: 5" << endl;
        cout << "Luck: 5" << endl;
        cout << "Magic: 10" << endl;
        cout << "HP: 80" << endl;
        cout << "Starting gold: 50" << endl << endl;
        cout << "1. Back to class menu" << endl;
        cout << "2. Choose Priest" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                flag = 1;
                break;
            case 2:
                className = "Priest";
                stats.push_back(80);
                stats.push_back(80);
                stats.push_back(1);
                stats.push_back(5);
                stats.push_back(5);
                stats.push_back(10);
                stats.push_back(1);
                stats.push_back(5);
                stats.push_back(50);
                magic = 10;
                command = "..abort";
                break;
            default:
                break;
        }
        if (command == "..abort") break;
    }
}

void classKnight() {
    int flag = 0;
    while (flag == 0) {
        clear();
        cout << "Knight" << endl;
        cout << "Strength: 10" << endl;
        cout << "Dexterity: 1" << endl;
        cout << "Defense: 10" << endl;
        cout << "Luck: 1" << endl;
        cout << "Magic: 5" << endl;
        cout << "HP: 90" << endl;
        cout << "Starting gold: 0" << endl << endl;
        cout << "1. Back to class menu" << endl;
        cout << "2. Choose Knight" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                flag = 1;
                break;
            case 2:
                className = "Knight";
                stats.push_back(90);
                stats.push_back(90);
                stats.push_back(10);
                stats.push_back(1);
                stats.push_back(10);
                stats.push_back(1);
                stats.push_back(1);
                stats.push_back(5);
                stats.push_back(0);
                magic = 5;
                command = "..abort";
                break;
            default:
                break;
        }
        if (command == "..abort") break;
    }
}

void classStudent() {
    int flag = 0;
    while (flag == 0) {
        clear();
        cout << "Student" << endl;
        cout << "Strength: -2" << endl;
        cout << "Dexterity: 5" << endl;
        cout << "Defense: 5" << endl;
        cout << "Luck: 60" << endl;
        cout << "Magic: 10" << endl;
        cout << "HP: 30" << endl;
        cout << "Starting debt: -200" << endl << endl;
        cout << "1. Back to class menu" << endl;
        cout << "2. Choose Student" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                flag = 1;
                break;
            case 2:
                className = "Student";
                stats.push_back(30);
                stats.push_back(30);
                stats.push_back(-2);
                stats.push_back(5);
                stats.push_back(5);
                stats.push_back(60);
                stats.push_back(1);
                stats.push_back(5);
                stats.push_back(-200);
                magic = 10;
                command = "..abort";
                break;
            default:
                break;
        }
        if (command == "..abort") break;
    }
}

/**
 * Shows the in game context menu
 * @param player - pointer to the player we want to play with
 */
void play(Player *player) {
    while (true) {
        clear();
        cout << "1. Fight enemy" << endl;
        cout << "2. Show your character" << endl;
        cout << "3. Shop" << endl;
        cout << "4. Give up" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                fight(player);
                break;
            case 2:
                showPlayer(player);
                break;
            case 3:
                shop(player);
                break;
            case 4:
                command = "..end";
                break;
            default:
                break;
        }
        if (command == "..end") break;
    }


}

/**
 * Shows the stats and score of a chosen player
 * @param player - pointer to the player we want to show stats
 */
void showPlayer(Player *player) {
    clear();
    cout << "Name: " << player->getName() << endl;
    cout << "Class: " << player->getPlayerClass() << endl;
    cout << "Strength: " << player->getStrength() << endl;
    cout << "Dexterity: " << player->getDexterity() << endl;
    cout << "Defense: " << player->getDefense() << endl;
    cout << "Luck: " << player->getLuck() << endl;
    cout << "Magic: " << player->getMagic() << endl;
    cout << "HP: " << player->getCurrentHP() << "/" << player->getMaxHP() << endl;
    cout << "Gold: " << player->getGold() << endl;
    cout << "Score: " << scoreCount << endl << endl;
    cout << "Press enter to continue";
    getchar();
}

/**
 * Shows the shop menu on screen, it lets upgrade chosen player
 * @param player - pointer to the player we want to open shop with
 */
void shop(Player *player) {
    int flag = 0;
    while (flag == 0) {
        clear();
        cout << "For 100 gold buy:" << endl;
        cout << "1. 1 Strength" << endl;
        cout << "2. 1 Dexterity" << endl;
        cout << "3. 1 Defense" << endl;
        cout << "4. 1 Luck" << endl;
        cout << "5. 1 Magic" << endl;
        cout << "6. 10 Max HP" << endl;
        cout << "7. Heal to Max HP" << endl;
        cout << "8. Back" << endl;
        cout << "Current gold: " << player->getGold() << endl;

        if (player->getGold() < 100) {
            cout << "You don't have enough gold, press enter to continue";
            getchar();
            break;
        }

        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }

        switch (comm) {
            case 1:
                player->setStrength(player->getStrength() + 1);
                break;
            case 2:
                player->setDexterity(player->getDexterity() + 1);
                break;
            case 3:
                player->setDefense(player->getDefense() + 1);
                break;
            case 4:
                player->setLuck(player->getLuck() + 1);
                break;
            case 5:
                player->setMagic(player->getMagic() + 1);
                break;
            case 6:
                player->setMaxHP(player->getMaxHP() + 10);
                break;
            case 7:
                player->setCurrentHP(player->getMaxHP());
                break;
            case 8:
                flag = 1;
                break;
            default:
                break;
        }
        player->setGold(player->getGold() - 100);
    }
}

/**
 * Shows the fight menu on screen
 * @param player - pointer to the player we want to fight with
 */
void fight(Player *player) {
    srand(time(nullptr));
    string name = enemyNames[rand() % enemyNames->size()];
    int modifier = (difficulty * (scoreCount / 10) + 1);
    int maxHP = (rand() % 30 + 20) * modifier;
    int strength = (rand() % 15) * modifier;
    int dexterity = (rand() % 15) * modifier;
    int defense = (rand() % 5) * modifier;
    int luck = (rand() % 15) * modifier;
    int minDmg = (rand() % 5) * modifier;
    int maxDmg = (rand() % 5 + minDmg) * modifier;
    int gold = (rand() % 30 + 20) * modifier;

    vector<int> enemyStats;
    enemyStats.push_back(maxHP);
    enemyStats.push_back(maxHP);
    enemyStats.push_back(strength);
    enemyStats.push_back(dexterity);
    enemyStats.push_back(defense);
    enemyStats.push_back(luck);
    enemyStats.push_back(minDmg);
    enemyStats.push_back(maxDmg);
    enemyStats.push_back(gold);

    Character *enemy1 = new Character(name, enemyStats);
    Character *enemy2 = new EliteEnemy("Elite " + name, enemyStats);
    Character *enemy = enemy1;

    srand(time(nullptr));
    if (rand() % 5 == 0) {
        enemy = enemy2;
    }


    int flag = 0;
    while (true) {
        clear();
        cout << "  " << player->getName() << "\t\t\t\t" << enemy->getName() << endl;
        cout << player->getCurrentHP() << "/" << player->getMaxHP() << "\t\t\t" << enemy->getCurrentHP() << "/"
             << enemy->getMaxHP() << endl;
        cout << "1. Attack" << endl;
        cout << "2. Heal" << endl;
        cout << "3. Give up" << endl;
        cout << "command number: ";
        getline(cin, command);
        int comm;
        try {
            comm = stoi(command);
        }
        catch (const invalid_argument &e) {
            continue;
        }
        int damage;
        switch (comm) {
            case 1:
                damage = player->attack();
                if (damage > 0) {
                    if (enemy->getHit(damage)) {
                        clear();
                        cout << "You've defeated an enemy" << endl
                             << "Here is your " << enemy->getGold() << " gold" << endl
                             << "Press enter to continue";
                        flag = 1;
                        scoreCount++;
                        player->setGold(player->getGold() + enemy->getGold());
                        getchar();
                    }
                }
                break;
            case 2:
                player->heal();
                break;
            case 3:
                command = "..end";
                break;
            default:
                break;
        }
        if (command == "..end" || flag == 1) break;

        damage = enemy->attack();
        if (damage > 0) {
            if (player->getHit(damage)) {
                clear();
                cout << "You've been defeated" << endl
                     << "Press enter to continue";
                getchar();
                command = "..end";
            }
        }

        if (command == "..end") break;
    }
}

/**
 * Saves the name and score of a chosen player
 * @param player - pointer to the player we want to save to leaderboard
 */
void saveToLeaderboard(const string &name) {
    string myLine;
    ifstream myFile;
    vector<leaderboardStruct<int>> leader;
    leaderboardStruct<int> next;
    myFile.open(filePath);

    if(myFile.is_open()){
        while (getline(myFile, myLine)) {
            string score;
            int flag = 0;
            for (char i: myLine) {
                if (i == ' ') {
                    flag = 1;
                }
                if (flag == 1) {
                    score += i;
                } else {
                    next.name += i;
                }
            }
            next.points = stoi(score);
            leader.push_back(next);
            next.name = "";
        }
        myFile.close();
    }

    next.name = name;
    next.points = scoreCount;
    leader.push_back(next);
    ofstream myWriteFile;
    myWriteFile.open(filePath);
    while (!leader.empty()) {
        myWriteFile << leader.back().name << " " << leader.back().points << "\n";
        leader.pop_back();
    }
    myWriteFile.close();
}