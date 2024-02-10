#include <iostream>

// Function to add two matrices
void addMatrix(int** matrix1, int** matrix2, int** result, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display the matrix
void displayMatrix(int** matrix, int size) {  
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to deallocate memory
void deallocateMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int size;

    std::cout << "Enter the size of the square matrices: ";
    std::cin >> size;

    // Create dynamic arrays for the matrices
    int** matrix1 = new int*[size];
    int** matrix2 = new int*[size];
    int** result = new int*[size];

    for (int i = 0; i < size; i++) {
        matrix1[i] = new int[size];
        matrix2[i] = new int[size];
        result[i] = new int[size];
    }

    // Input values for matrix1
    std::cout << "Enter the values for Matrix 1:" << std::endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "Enter value for element (" << i + 1 << "," << j + 1 << "): ";
            std::cin >> matrix1[i][j];
        }
    }

    // Input values for matrix2
    std::cout << "Enter the values for Matrix 2:" << std::endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "Enter value for element (" << i + 1 << "," << j + 1 << "): ";
            std::cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition
    addMatrix(matrix1, matrix2, result, size);

    // Display the result
    std::cout << "Resultant Matrix:" << std::endl;
    displayMatrix(result, size);

    // Deallocate memory
    deallocateMatrix(matrix1, size);
    deallocateMatrix(matrix2, size);
    deallocateMatrix(result, size);

    return 0;
}