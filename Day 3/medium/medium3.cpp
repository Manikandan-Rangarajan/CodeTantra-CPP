#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout<<"Enter numbers: ";
    cin >> x >> y;
    swapNumbers(x, y);
    cout << x << " " << y << endl;
}