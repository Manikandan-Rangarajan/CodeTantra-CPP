#include <iostream>
using namespace std;

int main(){
    int n,s,f=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element to search in array: ";
    cin>>s;
    for(int i=0;i<n;i++){
        if(a[i]==s) {cout<<s<<" found at position "<<i<<" in array"<<endl; f=1;}
    }
    if (!f) cout<<s<<" not in array"<<endl;
    return 0;
}
