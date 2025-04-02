#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your mark: ";
    cin>>n;
    if (n==100) cout<<"O grade"<<endl;
    else if (n>90) cout<<"A grade"<<endl;
    else if (n>80 and n<=90) cout<<"B grade"<<endl;
    else if (n>70 and n<=80) cout<<"C grade"<<endl;
    else if (n>60 and n<=70) cout<<"D grade"<<endl;
    else cout<<"F grade you failed"<<endl;
    return 0;
}