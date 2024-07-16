#include <iostream>
using namespace std;

// Function to allocate memory for a 2x2 matrix
double** createMatrix(int rows, int cols) {
    double** matrix = new double*[rows];
    for (int i = 0; i < rows; ++i)
        matrix[i] = new double[cols];
    return matrix;
}

// Function to input matrix elements
void inputMatrix(double** matrix, int rows, int cols) {
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

// Function to add two matrices
double** addMatrices(double** A, double** B, int rows, int cols) {
    double** result = createMatrix(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

// Function to subtract two matrices
double** subtractMatrices(double** A, double** B, int rows, int cols) {
    double** result = createMatrix(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
    return result;
}

// Function to display a matrix
void displayMatrix(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int rows = 2;
    const int cols = 2;

    double** matrixA = createMatrix(rows, cols);
    double** matrixB = createMatrix(rows, cols);

    cout << "Enter elements for Matrix A:\n";
    inputMatrix(matrixA, rows, cols);

    cout << "Enter elements for Matrix B:\n";
    inputMatrix(matrixB, rows, cols);

    double** sumMatrix = addMatrices(matrixA, matrixB, rows, cols);
    double** diffMatrix = subtractMatrices(matrixA, matrixB, rows, cols);

    cout << "Matrix A + Matrix B:\n";
    displayMatrix(sumMatrix, rows, cols);

    cout << "Matrix A - Matrix B:\n";
    displayMatrix(diffMatrix, rows, cols);

    // Free memory
    for (int i = 0; i < rows; ++i) {
        delete[] matrixA[i];
        delete[] matrixB[i];
        delete[] sumMatrix[i];
        delete[] diffMatrix[i];
    }
    delete[] matrixA;
    delete[] matrixB;
    delete[] sumMatrix;
    delete[] diffMatrix;

    return 0;
}
