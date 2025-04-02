// 3. Write a program to find the sum of the first N natural numbers using a for loop.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the max limit"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<sum<<endl;
    return 0;
}