#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int cn=n;
    int i=1;
    while(n>0){
        i*=n;
        n--;
    }
    cout<<"Factorial of "<<cn<<"  is "<<i<<endl;
    return 0;
}