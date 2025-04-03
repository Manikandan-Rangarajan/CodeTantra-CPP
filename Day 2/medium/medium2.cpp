#include <iostream>
using namespace std;

int main(){
    int r,c,m=-100000;
    cout<<"Enter rows and columns of array: ";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            if (a[i][j]>m) m=a[i][j];
        }
    }
    cout<<"Largest of all elements is: "<<m<<endl;
    return 0;
}