#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n>0){
        cout<<"+ve"<<endl;
    }
    else if (n<0){
        cout<<"-ve"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}