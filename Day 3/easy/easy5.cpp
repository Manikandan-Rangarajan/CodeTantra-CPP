
#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter string: ";
    getline(cin, s);
    int vowels = 0, consonants = 0;
    for (char c : s) {
        c = tolower(c);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << vowels << " " << consonants << endl;
}
