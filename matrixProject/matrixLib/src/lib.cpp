//
// Created by Maciek on 20.10.2021.
//

#include "iostream"
#include "cmath"
#include "string.h"
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void deleteMatrix(int** matrix, int rowsNumber){

    for(int row=0;row<rowsNumber;++row){
        delete[] matrix[row];
    }

    delete[] matrix;
}
void deleteMatrix(double** matrix, int rowsNumber){

    for(int row=0;row<rowsNumber;++row){
        delete[] matrix[row];
    }

    delete[] matrix;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void printMatrix(int** matrix, int rowsNumber, int columnsNumber){

    for(int row=0;row<rowsNumber;++row){
        for(int column=0;column<columnsNumber;++column){
            cout<<matrix[row][column]<<" ";
        }
        cout<<endl;
    }
}
void printMatrix(double** matrix, int rowsNumber, int columnsNumber){

    for(int row=0;row<rowsNumber;++row){
        for(int column=0;column<columnsNumber;++column){
            cout<<matrix[row][column]<<" ";
        }
        cout<<endl;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int** addMatrix(int** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber){

    auto** finalMatrix = new int*[rowsNumber];

    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new int[columnsNumber];

        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** addMatrix(double** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber){

    auto** finalMatrix = new double *[rowsNumber];

    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double [columnsNumber];

        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** addMatrix(double** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber){

    auto** finalMatrix = new double *[rowsNumber];

    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double [columnsNumber];

        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** addMatrix(int** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber){

    auto** finalMatrix = new double *[rowsNumber];

    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double [columnsNumber];

        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];
        }
    }

    return finalMatrix;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int** subtractMatrix(int** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new int*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new int[columnsNumber];

        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] - secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** subtractMatrix(double** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double *[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double [columnsNumber];

        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] - secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** subtractMatrix(int** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double *[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double [columnsNumber];

        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] - secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** subtractMatrix(double** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double *[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double [columnsNumber];

        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] - secondMatrix[row][column];
        }
    }

    return finalMatrix;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int** multiplyMatrix(int** firstMatrix, int** secondMatrix, int firstMatrixRowsNumber, int firstMatrixColumnsNumber, int secondMatrixColumnsNumber){
    auto** finalMatrix = new int*[firstMatrixRowsNumber];

    for(int row=0;row<firstMatrixRowsNumber;++row){
        finalMatrix[row]=new int[secondMatrixColumnsNumber];

        for(int column=0; column<secondMatrixColumnsNumber;++column){
            int cellSum=0;

            for(int i=0; i<firstMatrixColumnsNumber;++i){
                cellSum+=firstMatrix[row][i]*secondMatrix[i][column];
            }

            finalMatrix[row][column]=cellSum;
        }
    }

    return finalMatrix;
}
double ** multiplyMatrix(double ** firstMatrix, double ** secondMatrix, int firstMatrixRowsNumber, int firstMatrixColumnsNumber, int secondMatrixColumnsNumber){
    auto** finalMatrix = new double *[firstMatrixRowsNumber];

    for(int row=0;row<firstMatrixRowsNumber;++row){
        finalMatrix[row]=new double [secondMatrixColumnsNumber];

        for(int column=0; column<secondMatrixColumnsNumber;++column){
            double cellSum=0;

            for(int i=0; i<firstMatrixColumnsNumber;++i){
                cellSum+=firstMatrix[row][i]*secondMatrix[i][column];
            }

            finalMatrix[row][column]=cellSum;
        }
    }

    return finalMatrix;
}
double ** multiplyMatrix(int ** firstMatrix, double ** secondMatrix, int firstMatrixRowsNumber, int firstMatrixColumnsNumber, int secondMatrixColumnsNumber){
    auto** finalMatrix = new double *[firstMatrixRowsNumber];

    for(int row=0;row<firstMatrixRowsNumber;++row){
        finalMatrix[row]=new double [secondMatrixColumnsNumber];

        for(int column=0; column<secondMatrixColumnsNumber;++column){
            double cellSum=0;

            for(int i=0; i<firstMatrixColumnsNumber;++i){
                cellSum+=firstMatrix[row][i]*secondMatrix[i][column];
            }

            finalMatrix[row][column]=cellSum;
        }
    }

    return finalMatrix;
}
double ** multiplyMatrix(double ** firstMatrix, int ** secondMatrix, int firstMatrixRowsNumber, int firstMatrixColumnsNumber, int secondMatrixColumnsNumber){
    auto** finalMatrix = new double *[firstMatrixRowsNumber];

    for(int row=0;row<firstMatrixRowsNumber;++row){
        finalMatrix[row]=new double [secondMatrixColumnsNumber];

        for(int column=0; column<secondMatrixColumnsNumber;++column){
            double cellSum=0;

            for(int i=0; i<firstMatrixColumnsNumber;++i){
                cellSum+=firstMatrix[row][i]*secondMatrix[i][column];
            }

            finalMatrix[row][column]=cellSum;
        }
    }

    return finalMatrix;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int** multiplyByScalar(int** matrix,int rowsNumber, int columnsNumber, int scalar){
    auto** finalMatrix = new int*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new int[columnsNumber];

        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = matrix[row][column]*scalar;
        }
    }

    return finalMatrix;
}
double ** multiplyByScalar(double ** matrix,int rowsNumber, int columnsNumber, int scalar){
    auto** finalMatrix = new double *[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double [columnsNumber];
        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = matrix[row][column]*scalar;
        }
    }

    return finalMatrix;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int** transposeMatrix(int** matrix, int rowsNumber, int columnsNumber){

    auto** finalMatrix = new int*[columnsNumber];
    for(int row=0;row<columnsNumber;++row){
        finalMatrix[row]=new int[rowsNumber];

        for(int column=0;column<rowsNumber;++column){
            finalMatrix[row][column] = matrix[column][row];
        }
    }

    return finalMatrix;
}
double ** transposeMatrix(double** matrix, int rowsNumber, int columnsNumber){

    auto** finalMatrix = new double *[columnsNumber];
    for(int row=0;row<columnsNumber;++row){
        finalMatrix[row]=new double [rowsNumber];

        for(int column=0;column<rowsNumber;++column){
            finalMatrix[row][column] = matrix[column][row];
        }
    }

    return finalMatrix;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int** powerMatrix(int** matrix, int rowsNumber, int columnsNumber, unsigned power){

    auto** finalMatrix = new int*[rowsNumber];
    auto** powersMatrix = new int*[rowsNumber];
    int** temporaryMatrix;
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new int[columnsNumber];
        powersMatrix[row]=new int[columnsNumber];
        for(int column=0; column<columnsNumber;++column){
            if(row==column){
                finalMatrix[row][column]=1;
            }
            else{
                finalMatrix[row][column]=0;
            }

            powersMatrix[row][column] = matrix[row][column];
        }
    }

    while(power>0){
        if(power%2 == 1){
            temporaryMatrix = multiplyMatrix(finalMatrix,matrix, rowsNumber, columnsNumber, columnsNumber);
            deleteMatrix(finalMatrix,rowsNumber);
            finalMatrix=temporaryMatrix;
        }

        temporaryMatrix = multiplyMatrix(powersMatrix,powersMatrix,rowsNumber,columnsNumber,columnsNumber);
        deleteMatrix(powersMatrix,rowsNumber);
        powersMatrix = temporaryMatrix;
        power/=2;
    }

    deleteMatrix(powersMatrix,rowsNumber);
    return finalMatrix;
}
double** powerMatrix(double** matrix, int rowsNumber, int columnsNumber, unsigned power){

    auto** finalMatrix = new double*[rowsNumber];
    auto** powersMatrix = new double*[rowsNumber];
    double** temporaryMatrix;
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double[columnsNumber];
        powersMatrix[row]=new double[columnsNumber];
        for(int column=0; column<columnsNumber;++column){
            if(row==column){
                finalMatrix[row][column]=1;
            }
            else{
                finalMatrix[row][column]=0;
            }

            powersMatrix[row][column] = matrix[row][column];
        }
    }

    while(power>0){
        if(power%2 == 1){
            temporaryMatrix = multiplyMatrix(finalMatrix,matrix, rowsNumber, columnsNumber, columnsNumber);
            deleteMatrix(finalMatrix,rowsNumber);
            finalMatrix=temporaryMatrix;
        }

        temporaryMatrix = multiplyMatrix(powersMatrix,powersMatrix,rowsNumber,columnsNumber,columnsNumber);
        deleteMatrix(powersMatrix,rowsNumber);
        powersMatrix = temporaryMatrix;
        power/=2;
    }

    deleteMatrix(powersMatrix,rowsNumber);
    return finalMatrix;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int determinantMatrix(int** matrix, int rowsNumber, int columnsNumber){

    if(rowsNumber==1){
        return matrix[0][0];
    }

    int determinant=0;
    auto** partMatrix = new int*[rowsNumber-1];

    for(int row=0; row<rowsNumber; ++row){
        int flag =0;
        for(int i=0;i<rowsNumber-1;++i){
            partMatrix[i]= new int[columnsNumber-1];
            for(int j=0;j<columnsNumber-1;++j){
                if(i==row){
                    flag=1;
                }
                partMatrix[i][j] = matrix[i+flag][j+1];
            }
        }
        determinant+=pow(-1,row)*matrix[row][0]* determinantMatrix(partMatrix,rowsNumber-1,columnsNumber-1);
    }
    deleteMatrix(partMatrix,rowsNumber-1);
    return determinant;

}
double determinantMatrix(double ** matrix, int rowsNumber, int columnsNumber){

    if(rowsNumber==1){
        return matrix[0][0];
    }

    double determinant=0;
    auto** partMatrix = new double*[rowsNumber-1];

    for(int row=0; row<rowsNumber; ++row){
        int flag =0;
        for(int i=0;i<rowsNumber-1;++i){
            partMatrix[i]= new double[columnsNumber-1];
            for(int j=0;j<columnsNumber-1;++j){
                if(i==row){
                    flag=1;
                }
                partMatrix[i][j] = matrix[i+flag][j+1];
            }
        }
        determinant+=pow(-1,row)*matrix[row][0]* determinantMatrix(partMatrix,rowsNumber-1,columnsNumber-1);
    }
    deleteMatrix(partMatrix,rowsNumber-1);
    return determinant;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool matrixIsDiagonal(int** matrix, int rowsNumber, int columnsNumber){

    for(int row=0; row<rowsNumber; ++row){
        for(int column; column<columnsNumber;++column){
            if(row!=column && matrix[row][column]!=0){
                return false;
            }
        }
    }

    return true;
}
bool matrixIsDiagonal(double** matrix, int rowsNumber, int columnsNumber){

    for(int row=0; row<rowsNumber; ++row){
        for(int column; column<columnsNumber;++column){
            if(row!=column && matrix[row][column]!=0){
                return false;
            }
        }
    }

    return true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void swap(double &a, double &b){
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void sortRow(int* array, int columnsNumber){

    for(int i=0;i<columnsNumber;i++)
        for(int j=1;j<columnsNumber-i;j++)
            if(array[j-1]>array[j])
                swap(array[j-1], array[j]);

}
void sortRow(double* array, int columnsNumber){

    for(int i=0;i<columnsNumber;i++)
        for(int j=1;j<columnsNumber-i;j++)
            if(array[j-1]>array[j])
                swap(array[j-1], array[j]);

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void sortRowsInMatrix(int** matrix, int rowsNumber, int columnsNumber){
    for(int row=0;row<rowsNumber;++row){
        sortRow(matrix[row],columnsNumber);
    }
}
void sortRowsInMatrix(double** matrix, int rowsNumber, int columnsNumber){
    for(int row=0;row<rowsNumber;++row){
        sortRow(matrix[row],columnsNumber);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void help();

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int** createIntMatrix(int rowsNumber, int columnsNumber){
    auto** finalMatrix = new int*[rowsNumber];
    string tmp;
    cout<<"Podaj wartości do macierzy\n"
          "Pamiętaj aby wpisywać tylko liczby całkowite\n"
          "oraz wpisac "<<rowsNumber*columnsNumber<<" liczb\n";

    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new int[columnsNumber];
        for(int column=0;column<columnsNumber;++column){
            cin>>tmp;
            int size = tmp.size();
            int wrongTmp=0;
            for(int i=0;i<size;++i){
                if(!isdigit(tmp[i])){
                    cout<<"Podano nieprawidłową wartość\n"
                          "Proszę podać wartość ponownie\n";
                    column--;
                    wrongTmp=1;
                    break;
                }
            }

            if(wrongTmp==0){
                finalMatrix[row][column]=stoi(tmp);
            }
        }
    }

    return finalMatrix;
}
double** createDoubleMatrix(int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double *[rowsNumber];
    string tmp;
    cout<<"Podaj wartości do macierzy\n"
          "Pamiętaj aby wpisywać tylko liczby zmiennoprzecinkowe\n"
          "oraz wpisac "<<rowsNumber*columnsNumber<<" liczb\n";

    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double[columnsNumber];
        for(int column=0;column<columnsNumber;++column){
            cin>>tmp;
            int size = tmp.size();
            int wrongTmp=0;
            for(int i=0;i<size;++i){
                if(!isdigit(tmp[i]) && tmp[i]!='.'){
                    cout<<"Podano nieprawidłową wartość\n"
                          "Proszę podać wartość ponownie\n";
                    column--;
                    wrongTmp=1;
                    break;
                }
            }

            if(wrongTmp==0){
                finalMatrix[row][column]=stod(tmp);
            }
        }
    }

    return finalMatrix;
}
