// 2. Write a program that prints numbers from 1 to 50 but skips multiples of 5 using continue.
#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<=50;i++){
        if(i%5==0) continue;
        cout<<i<<" ";
    }
    return 0;
}