//
// Created by Maciek on 18.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

/* Prints matrix on standard output in a 2D representation
 * @param Matrix - a matrix to print
 * @param rowsNumber - number of rows in a 2D representation
 * @param columnsNumber - number of columns in a 2D representation
 */
void printMatrix(int** Matrix, int rowsNumber, int columnsNumber);
void printMatrix(double** Matrix, int rowsNumber, int columnsNumber);

/* Frees space allocated for 2D array
 * @param Matrix - pointer on 2D array
 * @param rowsNumber - number of rows in a 2D array
 */
void deleteMatrix(int** Matrix, int rowsNumber);
void deleteMatrix(double** Matrix, int rowsNumber);

/* Adds two matrices together
 * @param firstMatrix - first matrix to be added
 * @param secondMatrix - second matrix to be added
 * @param rowsNumber - number of rows of both matrices
 * @param columnNumber - number of columns of both matrices
 */
int** addMatrix(int** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber);
double** addMatrix(double** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber);
double** addMatrix(double** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber);
double** addMatrix(int** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber);

/* Subtracts one matrix form another
 * @param firstMatrix - matrix to subtracts from
 * @param secondMatrix - subtracted matrix
 * @param rowsNumber - number of rows of both matrices
 * @param columnNumber - number of columns of both matrices
 */
int** subtractMatrix(int** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber);
double** subtractMatrix(double** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber);
double** subtractMatrix(int** firstMatrix, double** secondMatrix, int rowsNumber, int columnsNumber);
double** subtractMatrix(double** firstMatrix, int** secondMatrix, int rowsNumber, int columnsNumber);

#endif //JIPP2_LIB_H
