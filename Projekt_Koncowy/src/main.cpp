//
// Created by Maciej Płachta on 19.01.2022.
//

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <vector>
#include "Character.h"
#include "Player.h"

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
void play(Player* player);
void showPlayer(Player* player);
void shop(Player* player);
void fight(Player* player);

using namespace std;
int magic;
string command, className;
vector<int> stats;

int main(int argc, char *argv[]) {

    menu();

    string playerName;
    cout<<"Give us your name: ";
    getline(cin,playerName);
    auto* player = new Player(playerName,stats,magic);
    player->setPlayerClass(className);

    play(player);

    return 0;
}

void clear(){
    //system("cls");
}
void menu(){
    int flag=0;
    while(flag==0)
    {
        clear();
        cout<<"1. Start Game"<<endl;
        cout<<"2. Options"<<endl;
        cout<<"3. Leaderboard"<<endl;
        cout<<"4. Exit Game"<<endl;
        cout<<"command number: ";
        getline(cin,command);
        switch(stoi(command)){
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
                flag=1;
                break;
            default:
                break;
        }
        if(command=="abort") break;
    }
}
void options(){
    while(true){
        clear();
        cout<<"1. Option"<<endl;
        cout<<"2. Option"<<endl;
        cout<<"3. Back to menu"<<endl;
        cout<<"command number: ";
        getline(cin,command);
        if(command=="1"|| command=="2"||command=="3"){
            break;
        }
    }
}
void leaderboard(){
    clear();
    cout<<"Leaderboard"<<endl;
    cout<<"Press any enter to back to menu"<<endl;
    getchar();
}
void classMenu(){
    int flag=0;
    while(flag==0){
        clear();
        cout<<"Choose your class"<<endl;
        cout<<"1. Warrior"<<endl;
        cout<<"2. Rouge"<<endl;
        cout<<"3. Priest"<<endl;
        cout<<"4. Knight"<<endl;
        cout<<"5. Student"<<endl;
        cout<<"6. Back to menu"<<endl;
        cout<<"command number: ";
        getline(cin,command);
        switch (stoi(command)) {
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
                flag=1;
                break;
            default:
                break;
        }
        if(command=="abort") break;
    }
}
void classWarrior(){
    int flag=0;
    while(flag==0){
        clear();
        cout<<"Warrior"<<endl;
        cout<<"Strength: 10"<<endl;
        cout<<"Dexterity: 5"<<endl;
        cout<<"Defense: 5"<<endl;
        cout<<"Luck: 1"<<endl;
        cout<<"Magic: 1"<<endl;
        cout<<"HP: 80"<<endl;
        cout<<"Starting gold: 50"<<endl<<endl;
        cout<<"1. Back to class menu"<<endl;
        cout<<"2. Choose Warrior"<<endl;
        cout<<"command number: ";
        getline(cin,command);
        switch (stoi(command)) {
            case 1:
                flag=1;
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
                command="abort";
                break;
            default:
                break;
        }
        if(command=="abort") break;
    }
}
void classRouge(){
    int flag=0;
    while(flag==0){
        clear();
        cout<<"Rouge"<<endl;
        cout<<"Strength: 5"<<endl;
        cout<<"Dexterity: 10"<<endl;
        cout<<"Defense: 5"<<endl;
        cout<<"Luck: 5"<<endl;
        cout<<"Magic: 1"<<endl;
        cout<<"HP: 60"<<endl;
        cout<<"Starting gold: 100"<<endl<<endl;
        cout<<"1. Back to class menu"<<endl;
        cout<<"2. Choose Rouge"<<endl;
        cout<<"command number: ";
        getline(cin,command);
        switch (stoi(command)) {
            case 1:
                flag=1;
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
                command="abort";
                break;
            default:
                break;
        }
        if(command=="abort") break;
    }
}
void classPriest(){
    int flag=0;
    while(flag==0){
        clear();
        cout<<"Priest"<<endl;
        cout<<"Strength: 1"<<endl;
        cout<<"Dexterity: 5"<<endl;
        cout<<"Defense: 5"<<endl;
        cout<<"Luck: 5"<<endl;
        cout<<"Magic: 10"<<endl;
        cout<<"HP: 80"<<endl;
        cout<<"Starting gold: 50"<<endl<<endl;
        cout<<"1. Back to class menu"<<endl;
        cout<<"2. Choose Priest"<<endl;
        cout<<"command number: ";
        getline(cin,command);
        switch (stoi(command)) {
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
                command="abort";
                break;
            default:
                break;
        }
        if(command=="abort") break;
    }
}
void classKnight(){
    int flag=0;
    while(flag==0){
        clear();
        cout<<"Knight"<<endl;
        cout<<"Strength: 10"<<endl;
        cout<<"Dexterity: 1"<<endl;
        cout<<"Defense: 10"<<endl;
        cout<<"Luck: 1"<<endl;
        cout<<"Magic: 5"<<endl;
        cout<<"HP: 90"<<endl;
        cout<<"Starting gold: 0"<<endl<<endl;
        cout<<"1. Back to class menu"<<endl;
        cout<<"2. Choose Knight"<<endl;
        cout<<"command number: ";
        getline(cin,command);
        switch (stoi(command)) {
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
                command="abort";
                break;
            default:
                break;
        }
        if(command=="abort") break;
    }
}
void classStudent(){
    int flag=0;
    while(flag==0){
        clear();
        cout<<"Student"<<endl;
        cout<<"Strength: -2"<<endl;
        cout<<"Dexterity: 5"<<endl;
        cout<<"Defense: 5"<<endl;
        cout<<"Luck: 60"<<endl;
        cout<<"Magic: 10"<<endl;
        cout<<"HP: 30"<<endl;
        cout<<"Starting debt: -200"<<endl<<endl;
        cout<<"1. Back to class menu"<<endl;
        cout<<"2. Choose Warrior"<<endl;
        cout<<"command number: ";
        getline(cin,command);
        switch (stoi(command)) {
            case 1:
                flag=1;
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
                stats = {80,80,10,5,5,1,1,5,50};
                magic = 10;
                command="abort";
                break;
            default:
                break;
        }
        if(command=="abort") break;
    }
}
void play(Player* player){
    int flag=0;
    while(flag==0) {
        clear();
        cout<<"1. Fight enemy"<<endl;
        cout<<"2. Show your character"<<endl;
        cout<<"3. Shop"<<endl;
        cout<<"4. Give up"<<endl;
        cout<<"command number: ";
        getline(cin,command);
        switch (stoi(command)) {
            case 1:
                break;
            case 2:
                showPlayer(player);
                break;
            case 3:
                shop(player);
                break;
            case 4:
                flag=1;
                break;
        }
    }


}
void showPlayer(Player* player){
        clear();
        cout<<"Name: "<<player->getName()<<endl;
        cout<<"Class: "<<player->getPlayerClass()<<endl;
        cout<<"Strength: "<<player->getStrength()<<endl;
        cout<<"Dexterity: "<<player->getDexterity()<<endl;
        cout<<"Defense: "<<player->getDefense()<<endl;
        cout<<"Luck: "<<player->getLuck()<<endl;
        cout<<"Magic: "<<player->getMagic()<<endl;
        cout<<"HP: "<<player->getCurrentHP()<<"/"<<player->getMaxHP()<<endl;
        cout<<"Gold: "<<player->getGold()<<endl<<endl;
        cout<<"Press any enter to back"<<endl;
        getchar();
}
void shop(Player* player){
    while(true){
        clear();
        cout<<"For 100 gold buy:"<<endl;
        cout<<"1. 1 Strength"<<endl;
        cout<<"2. 1 Dexterity"<<endl;
        cout<<"3. 1 Defense"<<endl;
        cout<<"4. 1 Luck"<<endl;
        cout<<"5. 1 Magic"<<endl;
        cout<<"6. 10 Max HP"<<endl;
        cout<<"7. Heal to Max HP"<<endl;
        cout<<"8. Back"<<endl;
        cout<<"Current gold: "<<player->getGold()<<endl;

        if(player->getGold()<100){
            cout<<"You don't have enough gold, press enter to continue";
            getchar();
            break;
        }

        cout<<"command number: ";
        getline(cin,command);
            switch (stoi(command)){
                case 1:
                    player->setStrength(player->getStrength()+1);
                    break;
                case 2:
                    player->setDexterity(player->getDexterity()+1);
                    break;
                case 3:
                    player->setDefense(player->getDefense()+1);
                    break;
                case 4:
                    player->setLuck(player->getLuck()+1);
                    break;
                case 5:
                    player->setMagic(player->getMagic()+1);
                    break;
                case 6:
                    player->setMaxHP(player->getMaxHP()+10);
                    break;
                case 7:
                    player->setCurrentHP(player->getMaxHP());
                    break;
                default:
                    break;
        }
        player->setGold(player->getGold()-100);
        break;
    }
}
void fight(Player* player){

}