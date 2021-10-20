//
// Created by Maciek on 20.10.2021.
//

#include "iostream"
using namespace std;

void deleteMatrix(int** Matrix, int rowsNumber){
    for(int row=0;row<rowsNumber;++row){
        delete[] Matrix[row];
    }
    delete[] Matrix;
}
void deleteMatrix(double** Matrix, int rowsNumber){
    for(int row=0;row<rowsNumber;++row){
        delete[] Matrix[row];
    }
    delete[] Matrix;
}

void printMatrix(int** Matrix, int rowsNumber, int columnsNumber){
    for(int row=0;row<rowsNumber;++row){
        for(int column=0;column<columnsNumber;++column){
            cout<<Matrix[row][column]<<" ";
        }
        cout<<endl;
    }
}
void printMatrix(double** Matrix, int rowsNumber, int columnsNumber){
    for(int row=0;row<rowsNumber;++row){
        for(int column=0;column<columnsNumber;++column){
            cout<<Matrix[row][column]<<" ";
        }
        cout<<endl;
    }
}

int** addMatrix(int** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new int*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new int[columnsNumber];
    }

    for(int row=0; row<rowsNumber;++row){
        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];
        }
    }

    return finalMatrix;

}
double** addMatrix(double** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double[columnsNumber];
    }

    for(int row=0; row<rowsNumber;++row){
        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** addMatrix(double** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double[columnsNumber];
    }

    for(int row=0; row<rowsNumber;++row){
        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** addMatrix(int** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double[columnsNumber];
    }

    for(int row=0; row<rowsNumber;++row){
        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] + secondMatrix[row][column];
        }
    }

    return finalMatrix;
}

int** subtractMatrix(int** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new int*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new int[columnsNumber];
    }

    for(int row=0; row<rowsNumber;++row){
        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] - secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** subtractMatrix(double** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double[columnsNumber];
    }

    for(int row=0; row<rowsNumber;++row){
        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] - secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** subtractMatrix(int** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double[columnsNumber];
    }

    for(int row=0; row<rowsNumber;++row){
        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] - secondMatrix[row][column];
        }
    }

    return finalMatrix;
}
double** subtractMatrix(double** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber){
    auto** finalMatrix = new double*[rowsNumber];
    for(int row=0;row<rowsNumber;++row){
        finalMatrix[row]=new double[columnsNumber];
    }

    for(int row=0; row<rowsNumber;++row){
        for(int column=0; column<columnsNumber;++column){
            finalMatrix[row][column] = firstMatrix[row][column] - secondMatrix[row][column];
        }
    }

    return finalMatrix;
}