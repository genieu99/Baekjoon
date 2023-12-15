#include <iostream>
#include <algorithm>
using namespace std;

int getGreatestCommonDivisor(int a, int b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int a, b;
    cin >> a >> b;
    if (a >= b) {
        cout << a * b / getGreatestCommonDivisor(a, b) << "\n";
    }
    else {
        cout << a * b / getGreatestCommonDivisor(b, a) << "\n";
    }
}

int getGreatestCommonDivisor(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    else {
        return getGreatestCommonDivisor(b, a % b);
    }
}