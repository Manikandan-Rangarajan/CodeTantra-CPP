// 2. Write a C++ program that accepts a three-digit number and determines whether it is an Armstrong
// number or not.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int temp = n,sum=0,len = int(log10(n)+1);
    while(temp>0){
        int d = temp%10;
        sum += pow(d,len);
        temp /= 10;
    }
    if(sum==n) cout<<"it is an Amstrong number"<<endl;
    else cout<<"it is not an Amstrong number"<<endl;
    return 0;
}