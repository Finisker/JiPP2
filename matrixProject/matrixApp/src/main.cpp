//
// Created by Maciek on 18.10.2021.
//
#include "iostream"
#include "lib.h"
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){

    if(argc<2 || argc>3){
        cout<<"Błąd w ilości argumentów";
        help();
        return 1;
    }
    else if(strcmp(argv[1],"help") == 0 && argc==2){
        help();
    }
    else if(strcmp(argv[1],"addMatrix") == 0 && argc==2){
        cout<<"Podaj liczbę wierszy obu macierzy\n";
        int rowsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn obu macierzy\n";
        int columnsNumber = matrixDimension();
        cout<<"Czy chcesz dodać macierze liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak") {
            cout<<"Podaj wartości pierwszej macierzy: \n";
            int **A = createIntMatrix(rowsNumber, columnsNumber);
            cout<<"Podaj wartości drugiej macierzy: \n";
            int **B = createIntMatrix(rowsNumber, columnsNumber);
            int **C = addMatrix(A, B, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
            deleteMatrix(B, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
        else if(tmp == "Nie"){
            cout<<"Podaj wartości pierwszej macierzy: \n";
            double **A = createDoubleMatrix(rowsNumber, columnsNumber);
            cout<<"Podaj wartości drugiej macierzy: \n";
            double **B = createDoubleMatrix(rowsNumber, columnsNumber);
            double **C = addMatrix(A, B, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
            deleteMatrix(B, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
    }
    else if(strcmp(argv[1],"subtractMatrix") == 0 && argc==2){
        cout<<"Podaj liczbę wierszy obu macierzy\n";
        int rowsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn obu macierzy\n";
        int columnsNumber = matrixDimension();
        cout<<"Czy chcesz odejmować macierze liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak") {
            cout<<"Podaj wartości pierwszej macierzy: \n";
            int **A = createIntMatrix(rowsNumber, columnsNumber);
            cout<<"Podaj wartości drugiej macierzy: \n";
            int **B = createIntMatrix(rowsNumber, columnsNumber);
            int **C = subtractMatrix(A, B, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
            deleteMatrix(B, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
        else if(tmp == "Nie"){
            cout<<"Podaj wartości pierwszej macierzy: \n";
            double **A = createDoubleMatrix(rowsNumber, columnsNumber);
            cout<<"Podaj wartości drugiej macierzy: \n";
            double **B = createDoubleMatrix(rowsNumber, columnsNumber);
            double **C = subtractMatrix(A, B, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
            deleteMatrix(B, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
    }
    else if(strcmp(argv[1],"multiplyMatrix") == 0 && argc==2){
        cout<<"Podaj liczbę wierszy pierwszej macierzy\n";
        int firstRowsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn pierwszej macierzy i jednocześnie wierszy drugiej macierzy\n";
        int firstColumnsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn drugiej macierzy\n";
        int secondColumsNumber = matrixDimension();
        cout<<"Czy chcesz mnożyć macierze liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak") {
            cout<<"Podaj wartości pierwszej macierzy: \n";
            int **A = createIntMatrix(firstRowsNumber, firstColumnsNumber);
            cout<<"Podaj wartości drugiej macierzy: \n";
            int **B = createIntMatrix(firstColumnsNumber, secondColumsNumber);
            int **C = multiplyMatrix(A, B, firstRowsNumber, firstColumnsNumber,secondColumsNumber);
            deleteMatrix(A, firstRowsNumber);
            deleteMatrix(B, firstColumnsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,firstRowsNumber,secondColumsNumber);
            deleteMatrix(C, firstRowsNumber);
        }

        else if(tmp == "Nie"){
            cout<<"Podaj wartości pierwszej macierzy: \n";
            double **A = createDoubleMatrix(firstRowsNumber, firstColumnsNumber);
            cout<<"Podaj wartości drugiej macierzy: \n";
            double **B = createDoubleMatrix(firstColumnsNumber, secondColumsNumber);
            double **C = multiplyMatrix(A, B, firstRowsNumber, firstColumnsNumber,secondColumsNumber);
            deleteMatrix(A, firstRowsNumber);
            deleteMatrix(B, firstColumnsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,firstRowsNumber,secondColumsNumber);
            deleteMatrix(C, firstRowsNumber);
        }
    }
    else if(strcmp(argv[1],"multiplyByScalar") == 0 && argc==2){
        cout<<"Podaj liczbę wierszy macierzy\n";
        int rowsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn macierzy\n";
        int columnsNumber = matrixDimension();
        string strSkalar;
        cout<<"Podaj wartość skalara\n";
        cin>>strSkalar;
        if(!isNumber(strSkalar)){
            cout<<"Podano nieprawidłową wartość skalara\n";
            help();
            return 1;
        }
        cout<<"Czy chcesz mnożyć przez skalar macierz liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak") {
            int skalar = stoi(strSkalar);
            cout<<"Podaj wartości macierzy: \n";
            int **A = createIntMatrix(rowsNumber, columnsNumber);
            int **C = multiplyByScalar(A, rowsNumber, columnsNumber,skalar);
            deleteMatrix(A, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
        else if(tmp == "Nie"){
            double skalar = stod(strSkalar);
            cout<<"Podaj wartość skalara\n";
            cin>>skalar;
            cout<<"Podaj wartości macierzy: \n";
            double **A = createDoubleMatrix(rowsNumber, columnsNumber);
            double **C = multiplyByScalar(A, rowsNumber, columnsNumber,skalar);
            deleteMatrix(A, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
    }
    else if(strcmp(argv[1],"transpozeMatrix") == 0 && argc==2){
        cout<<"Podaj liczbę wierszy macierzy\n";
        int rowsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn macierzy\n";
        int columnsNumber = matrixDimension();
        cout<<"Czy chcesz transponować macierz liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak") {
            cout<<"Podaj wartości macierzy: \n";
            int **A = createIntMatrix(rowsNumber, columnsNumber);
            int **C = transposeMatrix(A, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
        else if(tmp == "Nie"){
            cout<<"Podaj wartości macierzy: \n";
            double **A = createDoubleMatrix(rowsNumber, columnsNumber);
            double **C = transposeMatrix(A, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
    }
    else if(strcmp(argv[1],"powerMatrix") == 0 && argc==3){
        cout<<"Podaj liczbę wierszy macierzy\n";
        int rowsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn macierzy\n";
        int columnsNumber = matrixDimension();
        if(!isNumber(argv[2])){
            cout<<"Podano nieprawidłową wartość wykładnika potęgi\n";
            help();
            return 1;
        }
        unsigned power;
        power = stoi(argv[2]);
        cout<<"Czy chcesz potęgować macierz liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak"){
            cout<<"Podaj wartości macierzy: \n";
            int **A = createIntMatrix(rowsNumber, columnsNumber);
            int **C = powerMatrix(A, rowsNumber, columnsNumber,power);
            deleteMatrix(A, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
        else if(tmp == "Nie"){
            cout<<"Podaj wartości macierzy: \n";
            double **A = createDoubleMatrix(rowsNumber, columnsNumber);
            double **C = powerMatrix(A, rowsNumber, columnsNumber,power);
            deleteMatrix(A, rowsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(C,rowsNumber,columnsNumber);
            deleteMatrix(C, rowsNumber);
        }
    }
    else if(strcmp(argv[1],"determinantMatrix") == 0 && argc==2){
        cout<<"Podaj liczbę wierszy macierzy\n";
        int rowsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn macierzy\n";
        int columnsNumber = matrixDimension();
        double determinant;
        cout<<"Czy chcesz wyznaczyć wyznacznik macierzy liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak") {
            cout<<"Podaj wartości macierzy: \n";
            int **A = createIntMatrix(rowsNumber, columnsNumber);
            determinant = determinantMatrix(A, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
        }
        else if(tmp == "Nie"){
            cout<<"Podaj wartości macierzy: \n";
            double **A = createDoubleMatrix(rowsNumber, columnsNumber);
            determinant = determinantMatrix(A, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
        }
        cout<<"Wyznacznik: "<<determinant;
    }
    else if(strcmp(argv[1],"matrixIsDiagonal") == 0 && argc==2){
        cout<<"Podaj liczbę wierszy macierzy\n";
        int rowsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn macierzy\n";
        int columnsNumber = matrixDimension();
        bool isDiagonal;
        cout<<"Czy chcesz sprawdziź diagonalność macierzy liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak") {
            cout<<"Podaj wartości macierzy: \n";
            int **A = createIntMatrix(rowsNumber, columnsNumber);
            isDiagonal = matrixIsDiagonal(A, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
        }
        else if(tmp == "Nie"){
            cout<<"Podaj wartości macierzy: \n";
            double **A = createDoubleMatrix(rowsNumber, columnsNumber);
            isDiagonal = matrixIsDiagonal(A, rowsNumber, columnsNumber);
            deleteMatrix(A, rowsNumber);
        }
        if(isDiagonal){
            cout<<"Macierz jest diagonalna\n";
        }
        else{
            cout<<"Macierz nie jest diagonalna\n";
        }
    }
    else if(strcmp(argv[1],"sortRow") == 0 && argc==2){
        cout<<"Podaj wielkość tablicy\n";
        int arraySize = matrixDimension();
        cout<<"Czy chcesz posortować tablice liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak"){
            auto* array = new int[arraySize];
            cout<<"Podaj wartości tablicy: \n";
            for(int i=0;i<arraySize;++i) {
                string input;
                cin >> input;
                if (isNumber(input)) {
                    array[i] = stoi(input);
                } else {
                    cout << "Podano złą wartość\n"
                            "Proszę podać ją ponownie\n";
                    --i;
                    continue;
                }
            }
            sortRow(array,arraySize);
            cout<<"Posortowana talbica\n";
            for(int i=0;i<arraySize;++i) {
                cout<<array[i]<<" ";
            }
        }
        else if(tmp == "Nie"){
            auto* array = new double[arraySize];
            cout<<"Podaj wartości tablicy: \n";
            for(int i=0;i<arraySize;++i) {
                string input;
                cin >> input;
                if (isNumber(input)) {
                    array[i] = stod(input);
                } else {
                    cout << "Podano złą wartość\n"
                            "Proszę podać ją ponownie\n";
                    --i;
                    continue;
                }
            }
            sortRow(array,arraySize);
            cout<<"Posortowana talbica\n";
            for(int i=0;i<arraySize;++i) {
                cout<<array[i]<<" ";
            }
        }
    }
    else if(strcmp(argv[1],"sortRowsInMatrix") == 0 && argc==2){
        cout<<"Podaj liczbę wierszy macierzy\n";
        int rowsNumber = matrixDimension();
        cout<<"Podaj liczbę kolumn macierzy\n";
        int columnsNumber = matrixDimension();
        cout<<"Czy chcesz posortować macierz liczb całkowitych?  Tak/Nie\n";
        string tmp;
        cin>>tmp;
        if(tmp == "Tak") {
            cout<<"Podaj wartości macierzy: \n";
            int **A = createIntMatrix(rowsNumber, columnsNumber);
            sortRowsInMatrix(A,rowsNumber,columnsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(A,rowsNumber,columnsNumber);
            deleteMatrix(A, rowsNumber);
        }
        else if(tmp == "Nie"){
            cout<<"Podaj wartości macierzy: \n";
            double **A = createDoubleMatrix(rowsNumber, columnsNumber);
            sortRowsInMatrix(A,rowsNumber,columnsNumber);
            cout<<"Macierz wynikowa:\n";
            printMatrix(A,rowsNumber,columnsNumber);
            deleteMatrix(A, rowsNumber);
        }
    }
    else{
        cout<<"Błędne argumenty\n";
        help();
        return 1;
    }

    return 0;
}