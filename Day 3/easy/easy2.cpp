#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cout << "String1: ";
    getline(cin, s1);
    cout << "String2: ";
    getline(cin, s2);
    cout << s1 + s2 << endl;
}