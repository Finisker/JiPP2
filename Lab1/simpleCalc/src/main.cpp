#include <iostream>
#include <cstring>
#include "../include/calc.h"

using namespace std;

enum commands{
    ERROR,
    ADD,
    SUBTRACT,
    VOLUME,
    HELP
};
int main(int argc, char* argv[]){

    int command;
    command = commandSelecter(argv[1]);

    switch (command){
        case ADD:
            if(argc==4){
                cout<<add(stoi(argv[2]), stoi(argv[3]));
            }
            else error();
            break;
        case SUBTRACT:
            if(argc==4){
                cout<<subtract(stoi(argv[2]), stoi(argv[3]));
            }
            else error();
            break;
        case VOLUME:
            if(argc==5){
                cout<<volume(stoi(argv[2]), stoi(argv[3]),stoi(argv[4]));
            }
            else error();
            break;
        case HELP:
            help();
            break;
        default:
            error();
    }


    return 0;
}


