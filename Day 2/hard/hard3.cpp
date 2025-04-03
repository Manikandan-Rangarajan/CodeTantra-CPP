#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter row and col val"<<endl;
    cin>>r>>c;
    int mat[r][c];
    cout << "\nEnter elements for Matrix A:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }
    int transpose[c][r];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
    cout<<"Og matrix :"<<endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Tranpose matrix is :"<<endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << transpose[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}