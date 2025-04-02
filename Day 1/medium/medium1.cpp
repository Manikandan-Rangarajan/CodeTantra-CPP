#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter 3 numbers: ";
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3){
        cout<<"n1 is the largest"<<endl;
        if (n1==n2) cout<<"n2 equals n1"<<endl;
        if (n1==n3) cout<<"n3 equals n1"<<endl;
        }
    else if(n2>n1 && n2>=n3){
        cout<<"n2 is the largest"<<endl;
        if (n2==n3) cout<<"n3 equals n2"<<endl;
        }
    else{
        cout<<"n3 is the largest"<<endl;
    }
    return 0;
}