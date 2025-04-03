#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout<<"Enter: ";
    getline(cin, s);
    string upper = s, lower = s;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    cout << upper << "\n" << lower << endl;
}