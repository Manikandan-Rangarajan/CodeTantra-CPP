#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter string: ";
    getline(cin, s);
    for (char &c : s)
        if (c == ' ') c = '_';
    cout << s << endl;
}