#include <iostream>
using namespace std;

int isprime(int n){
    if (n==2 || n==3) return 1;
    if (n==1 || n==0) return 0;
    for(int i=2;i<=int(n/2);i++){
        if (n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n,s=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s += isprime(a[i]);
    }
    cout<<"Number of prime numbers in array is: "<<s<<endl;
    return 0;
}