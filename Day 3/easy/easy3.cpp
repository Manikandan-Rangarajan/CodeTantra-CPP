#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << (isPalindrome(s) ? "Yes" : "No") << endl;
}