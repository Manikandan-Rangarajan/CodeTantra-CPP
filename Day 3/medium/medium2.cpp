#include <iostream>
#include <algorithm>
using namespace std;

string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    string s;
    cout<<"String: ";
    getline(cin, s);
    cout << reverseString(s) << endl;
}