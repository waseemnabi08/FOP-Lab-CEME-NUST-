#include <iostream>
using namespace std;


int main()
{
    // Example matrices to multiply
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][2] = {{10, 11}, {12, 13}, {14, 15}};
    int c[3][2]; // result matrix

    int n = 3; // number of rows in a
    int m = 3; // number of columns in a (should equal number of rows in b)
    int p = 2; // number of columns in b

    // Multiply the matrices
    // matrixMultiplication(a, b, c, n, m, p);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0; // initialize result matrix element to zero
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j]; // compute dot product of row i of a and column j of b
            }
        }
    }



    // Print the result matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << c[i][j] << " ";
        }
        cout  << endl;
    }

    return 0;
}
