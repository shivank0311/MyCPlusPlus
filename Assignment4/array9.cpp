#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrices
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Define the two matrices
    int m1[rows][cols];
    int m2[rows][cols];
    int multm[rows][cols];

    // Input elements for the first matrix
    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> m1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> m2[i][j];
        }
    }

    // Add the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            multm[i][j] = m1[i][j] * m2[i][j];
        }
    }

    // Display the result matrix (sumMatrix)
    cout << "Resultant Matrix (Sum of the two matrices):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << multm[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
