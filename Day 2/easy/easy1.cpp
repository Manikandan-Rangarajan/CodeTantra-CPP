// 1. Write a program to print all even numbers from 1 to N using a while loop.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=1;
    cout<<"Enter the max limit"<<endl;
    cin>>n;
    while(cnt<=n){
        if((cnt&1)==0) cout<<cnt<<" ";
        cnt++;
    }
}