// 5. Implement a simple calculator that allows the user to choose an operation (addition, subtraction,
//     multiplication, division) using a switch statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Simple Calculator\nChoose\n1.Add\n2.Sub\n3.Multiply\n4.Divide"<<endl;
    cin>>n;
    switch(n){
        case 1:
              cout<<"enter 2 numbers for addition"<<endl;
              int a,b;
              cin>>a>>b;
              cout<<a+b;
              break;
        case 2:
              cout<<"enter 2 numbers for subtraction"<<endl;
              cin>>a>>b;
              cout<<a-b;
              break;
        case 3:
              cout<<"enter 2 numbers for mutiplication"<<endl;
            //   int a,b;
              cin>>a>>b;
              cout<<a*b;
              break;
        case 4:
              cout<<"enter 2 numbers for division"<<endl;
            //   int a,b;
              cin>>a>>b;
              cout<<a/b;
              break;
        default:
              cout<<"Enter a valid input";
    }
    return 0;
}