#include <iostream>
using namespace std;

int main(){
    int n,s=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    cout<<"Sum of all elements is: "<<s<<endl;
    return 0;
}