//
// Created by Maciek on 18.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

/**
 * Prints matrix on standard output in a 2D representation
 * @param Matrix - a matrix to print
 * @param rowsNumber - number of rows in a 2D representation
 * @param columnsNumber - number of columns in a 2D representation
 */
void printMatrix(int** matrix, int rowsNumber, int columnsNumber);
void printMatrix(double** matrix, int rowsNumber, int columnsNumber);

/**
 * Frees space allocated for 2D array
 * @param Matrix - pointer on 2D array
 * @param rowsNumber - number of rows in a 2D array
 */
void deleteMatrix(int** matrix, int rowsNumber);
void deleteMatrix(double** matrix, int rowsNumber);

/**
 * Adds two matrices together
 * @param firstMatrix - first matrix to be added
 * @param secondMatrix - second matrix to be added
 * @param rowsNumber - number of rows of both matrices
 * @param columnNumber - number of columns of both matrices
 */
int** addMatrix(int** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber);
double** addMatrix(double** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber);
double** addMatrix(double** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber);
double** addMatrix(int** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber);

/**
 * Subtracts one matrix form another
 * @param firstMatrix - matrix to subtracts from
 * @param secondMatrix - subtracted matrix
 * @param rowsNumber - number of rows of both matrices
 * @param columnNumber - number of columns of both matrices
 */
int** subtractMatrix(int** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber);
double** subtractMatrix(double** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber);
double** subtractMatrix(int** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber);
double** subtractMatrix(double** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber);

/**
 * Multiplies a matrix by another matrix
 * @param firstMatrix - left matrix of multiplication
 * @param secondMatrix - right matrix of multiplication
 * @param firstMatrixRowsNumber - number of rows of the left matrix
 * @param firstMatrixColumnsNumber - number of columns of the left matrix
 * @param secondMatrixColumnsNumber - number of columns of the right
 */
int** multiplyMatrix(int** firstMatrix, int** secondMatrix, int firstMatrixRowsNumber, int firstMatrixColumnsNumber, int secondMatrixColumnsNumber);
double ** multiplyMatrix(double ** firstMatrix, double ** secondMatrix, int firstMatrixRowsNumber, int firstMatrixColumnsNumber, int secondMatrixColumnsNumber);
double ** multiplyMatrix(int ** firstMatrix, double ** secondMatrix, int firstMatrixRowsNumber, int firstMatrixColumnsNumber, int secondMatrixColumnsNumber);
double ** multiplyMatrix(double ** firstMatrix, int ** secondMatrix, int firstMatrixRowsNumber, int firstMatrixColumnsNumber, int secondMatrixColumnsNumber);

/**
 * Multiplies a matrix by scalar
 * @param matrix - matrix to multiply
 * @param rowsNumber - number of rows of both matrices
 * @param columnNumber - number of columns of both matrices
 * @param scalar - number by which we multiply the matrix
 */
int** multiplyByScalar(int** matrix,int rowsNumber, int columnsNumber, int scalar);
double ** multiplyByScalar(double ** matrix,int rowsNumber, int columnsNumber, int scalar);

/**
 * Transposes the matrix (flips a matrix over its diagonal)
 * @param matrix - matrix to transpose
 * @param rowsNumber - number of rows of the matrix
 * @param columnNumber - number of columns of the matrix
 */
int** transposeMatrix(int** matrix, int rowsNumber, int columnsNumber);
int** transposeMatrix(double** matrix, int rowsNumber, int columnsNumber);

/**
 * Swaps two numbers with each other
 * @param a - first number to swap
 * @param b - second number to swap
 */
void swap(int &a, int &b);
void swap(double &a, double &b);

#endif //JIPP2_LIB_H
