#include <iostream>
using namespace std;

int main() {
    string s, sub;
    cout<<"String1: ";
    getline(cin, s);
    cout<<"String2: ";
    getline(cin, sub);
    cout << s.find(sub) << endl;
}