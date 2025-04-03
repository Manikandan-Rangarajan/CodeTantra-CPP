#include <iostream>
using namespace std;

int main(){
    int n,s=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Reversed array is:"<<endl;
    for(int i=n-1;i>=0;i--){
        b[n-i-1]=a[i];
        cout<<b[n-i-1]<<" ,";
    }
    cout<<endl;
    return 0;
}