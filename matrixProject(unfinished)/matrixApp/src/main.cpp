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
        cout<<"Błąd w ilości argumentów";
        help();
        return 1;
    }
    else if(strcmp(argv[1],"help") == 0){
        help();
        return 0;
    }
    else if(strcmp(argv[1],"addMatrix") == 0){
        cout<<"Podaj wymiary obu macierzy\n";
        int rowsNumber = matrixDimension();
        int columnsNumber = matrixDimension();
        cout<<"Czy pierwsza macierz ma być macierzą liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak"){
            int** A = createIntMatrix(rowsNumber,columnsNumber);
            cout<<"Czy druga macierz ma być macierzą liczb całkowitych?  Tak/Nie\n";
            cin>>tmp;
            if(tmp == "Tak"){
                int** B = createIntMatrix(rowsNumber,columnsNumber);
                int** C = addMatrix(A,B,rowsNumber,columnsNumber);
                printMatrix(C,rowsNumber,columnsNumber);
                deleteMatrix(A,rowsNumber);
                deleteMatrix(B,rowsNumber);
                deleteMatrix(C,rowsNumber);
            }
            else{
                double** B = createDoubleMatrix(rowsNumber,columnsNumber);
                double ** C = addMatrix(A,B,rowsNumber,columnsNumber);
                printMatrix(C,rowsNumber,columnsNumber);
                deleteMatrix(A,rowsNumber);
                deleteMatrix(B,rowsNumber);
                deleteMatrix(C,rowsNumber);
            }
        }
        else if(tmp == "Nie"){
            double** A = createDoubleMatrix(rowsNumber,columnsNumber);
            cout<<"Czy druga macierz ma być macierzą liczb całkowitych?  Tak/Nie\n";
            cin>>tmp;
            if(tmp == "Tak"){
                int** B = createIntMatrix(rowsNumber,columnsNumber);
                double** C = addMatrix(A,B,rowsNumber,columnsNumber);
                printMatrix(C,rowsNumber,columnsNumber);
                deleteMatrix(A,rowsNumber);
                deleteMatrix(B,rowsNumber);
                deleteMatrix(C,rowsNumber);
            }
            else{
                double** B = createDoubleMatrix(rowsNumber,columnsNumber);
                double ** C = addMatrix(A,B,rowsNumber,columnsNumber);
                printMatrix(C,rowsNumber,columnsNumber);
                deleteMatrix(A,rowsNumber);
                deleteMatrix(B,rowsNumber);
                deleteMatrix(C,rowsNumber);
            }
        }
        return 0;
    }


    return 0;
}