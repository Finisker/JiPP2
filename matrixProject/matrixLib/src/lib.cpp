//
// Created by Maciek on 20.10.2021.
//

#include "iostream"
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