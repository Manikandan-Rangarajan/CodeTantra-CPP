// 8. Write a C++ program to check if a character is uppercase, lowercase, a digit, or a special character
// using if-else. 
#include<bits/stdc++.h>
using namespace std;

int main(){
    char c ;
    cout<<"Enter a character"<<endl;
    cin>>c;
    if(c>=65 && c<=90) cout<<"Uppercase"<<endl;
    else if(c>=97 && c<=122) cout<<"Lowercase"<<endl;
    else if(c>=48 && c<=57) cout<<"Digit"<<endl;
    else cout<<"Spl symbols"<<endl;
    return 0;
}