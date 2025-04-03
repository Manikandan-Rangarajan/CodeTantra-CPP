#include <iostream>
using namespace std;

bool isSymmetric(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i])
                return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of square matrix (n x n): ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    if (isSymmetric(matrix, n))
        cout << "The matrix is symmetric.\n";
    else
        cout << "The matrix is NOT symmetric.\n";

    return 0;
}
