#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void printDash(int exponent);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int exponent;
    while (cin >> exponent) {
        printDash(exponent);
        cout << "\n";
    }
}

void printDash(int exponent) {
    int number = pow(3, exponent - 1);
    
    if (number == 0) {
        cout << "-";
        return;
    }

    printDash(exponent - 1);
    for (int i = 0; i < number; i++) {
        cout << " ";
    }
    printDash(exponent - 1);
}