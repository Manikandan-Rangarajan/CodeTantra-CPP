#include <iostream>
using namespace std;

string removeDigits(string s) {
    string res;
    for (char c : s)
        if (!isdigit(c)) res += c;
    return res;
}

int main() {
    string s;
    cout<<"Enter string: ";
    getline(cin, s);
    cout << removeDigits(s) << endl;
}