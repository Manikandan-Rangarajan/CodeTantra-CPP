#include <iostream>
#include <string>
using namespace std;

int main(){
    string u,p;
    cout<<"Enter your username: ";
    cin>>u;
    cout<<"Enter your password: ";
    cin>>p;
    string cu = "Apple", cp = "Banana";
    if(u==cu && p==cp) cout<<"Logged in! Welcome "<<cu<<endl;
    else cout<<"Incorrect username or password"<<endl;
    return 0;
}