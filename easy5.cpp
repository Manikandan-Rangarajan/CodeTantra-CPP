#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if((n&1) ==0) cout<<"even";
    else cout<<"odd";
    return 0;
}