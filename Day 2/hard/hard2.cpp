#include <iostream>
using namespace std;

void matrixMultiply(int n, int m, int p, int a[][100], int b[][100], int result[][100]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            result[i][j] = 0;
            for(int k = 0; k < m; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int n, m, p;
    
    cout << "Enter the number of rows and columns of Matrix A: ";
    cin >> n >> m;
    
    cout << "Enter the number of columns of Matrix B: ";
    cin >> p;  // Rows of B must be `m`

    int a[n][100], b[m][100], result[n][100];  // VLAs with max column size

    cout << "\nEnter elements for Matrix A (" << n << "x" << m << "):\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements for Matrix B (" << m << "x" << p << "):\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }

    matrixMultiply(n, m, p, a, b, result);

    cout << "\nResultant Matrix (" << n << "x" << p << "):\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
