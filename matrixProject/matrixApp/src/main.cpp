//
// Created by Maciek on 18.10.2021.
//
#include "iostream"
#include "lib.h"
using namespace std;

#define NUMBER 3

int main(){

    auto** A = new double*[NUMBER];
    auto** B = new int*[NUMBER];
    for(int i=0; i<NUMBER;++i){
        A[i] = new double[NUMBER];
        B[i] = new int[NUMBER];
        for(int j=0; j<NUMBER;++j){
            A[i][j]=i*3+j;
            B[i][j]=2*(i*3 +j);
        }
    }

    double** C = addMatrix(B,A,NUMBER,NUMBER);
    double** D = subtractMatrix(A,B,NUMBER,NUMBER);

    printMatrix(C,NUMBER,NUMBER);
    printMatrix(D,NUMBER,NUMBER);

    deleteMatrix(A,NUMBER);
    deleteMatrix(B,NUMBER);
    deleteMatrix(C,NUMBER);
    deleteMatrix(D,NUMBER);

    return 0;
}