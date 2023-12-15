#include <iostream>
#include <algorithm>
using namespace std;

int getGreatestCommonDivisor(int a, int b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a1, b1, a2, b2, n, m, numerator, denominator;
    cin >> a1 >> b1 >> a2 >> b2;
    
    n = a1 * b2 + a2 * b1;
    m = b1 * b2;

    numerator = n / getGreatestCommonDivisor(n, m);
    denominator = m / getGreatestCommonDivisor(n, m);

    cout << numerator << " " << denominator;
}

int getGreatestCommonDivisor(int a, int b) {
    if (b > a) {
        return getGreatestCommonDivisor(b, a);
    }
    if (a % b == 0) {
        return b;
    }
    else {
        return getGreatestCommonDivisor(b, a % b);
    }
}