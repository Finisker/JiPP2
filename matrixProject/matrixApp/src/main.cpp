//
// Created by Maciek on 18.10.2021.
//
#include "iostream"
#include "lib.h"
#include <cstring>
using namespace std;

#define NUMBER 3

int main(int argc, char *argv[]){

    if(argc<2 || argc>3){
        cout<<"Podano błędną liczbę argumentów\n";
        help();
    } else if(strcmp(argv[1],"addMatrix") == 0){
        string tmp;
        cout<<"Czy chesz podać macierz liczb całkowitych? Tak\\Nie\n";
        cin>>tmp;
        if(tmp=="Tak"){
            cout<<"Podaj wymiary macierzy\n";
            int rowsNumber, columnsNumber;
            cin>>rowsNumber>>columnsNumber;
            int** A;
            A = createIntMatrix(rowsNumber,columnsNumber);
        }
        else if(tmp=="Nie"){
            cout<<"Podaj wymiary macierzy\n";
            int rowsNumber, columnsNumber;
            cin>>rowsNumber>>columnsNumber;
            double** A;
            A = createDoubleMatrix(rowsNumber,columnsNumber);
        }
        else{
            cout<<"Podano błędą odpowiedź\n";
            return 1;
        }
    }

    return 0;
}