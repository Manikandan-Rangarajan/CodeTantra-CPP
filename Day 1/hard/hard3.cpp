#include <iostream>
#include <string>
using namespace std;

int main(){
    string u,p;
    string cu, cp;
    cout<<"Sign-in\nEnter correct username: "<<endl;
    cin>>cu;
    cout<<"Enter correct password: "<<endl;
    cin>>cp;
    cout<<"Enter your username: ";
    cin>>u;
    cout<<"Enter your password: ";
    cin>>p;
    
    if(u==cu && p==cp) cout<<"Logged in! Welcome "<<cu<<endl;
    else cout<<"Incorrect username or password"<<endl;
    return 0;
}