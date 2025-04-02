#include <iostream>
using namespace std;

int main(){
    int n,c,f=1;
    cout<<"Enter units of electricity used: ";
    cin>>n;
    if (n>=0 && n<=100){
        c = n*2;
    }
    else if (100<n && n<=300){
        c = n*5;
    }
    else if (n>300){
        c = n*8;
    }
    else{
        cout<<"Invalid input"<<endl;
        f=0;
    }
    if (f){
        cout<<"Bill is: "<<c<<endl;
    }
    return 0;
}