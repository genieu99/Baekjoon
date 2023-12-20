#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

void determineTrianlgeType(int a, int b, int c);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    while (1) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c ==0) {
            break;
        }
        determineTrianlgeType(a, b, c);
    }
}

void determineTrianlgeType(int a, int b, int c) {
    if (a == b && b == c && c == a) {
        cout << "Equilateral\n";
    }
    else if (a >= b + c || b >= a + c || c >= a + b) {
        cout << "Invalid\n";
    }
    else if (a == b || b == c || c == a) {
        cout << "Isosceles\n";
    }
    else {
        cout << "Scalene\n";
    }
}