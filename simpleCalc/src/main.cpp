#include <iostream>
#include <cstring>
#include "../include/calc.h"

using namespace std;

int main(int argc, char* argv[]){

    if(argc==4){
        if(!strcmp(argv[1], "add")){
            cout<<add(stoi(argv[2]), stoi(argv[3]));
        }
        else if(!strcmp(argv[1], "subtract")){
            cout<<subtract(stoi(argv[2]), stoi(argv[3]));
        }
        else{
            error();
        }
    }
    else if (argc==5){
        if(!strcmp(argv[1], "volume")){
            cout<<volume(stoi(argv[2]), stoi(argv[3]),stoi(argv[4]));
        }
        else{
            error();
        }
    }
    else if(argc==2 && !strcmp(argv[1], "help")){
        help();
    }
    else{
        error();
    }

    return 0;
}


