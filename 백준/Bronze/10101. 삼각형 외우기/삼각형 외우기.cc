#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

void determineTrianlgeType(int A, int B, int C);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;
    determineTrianlgeType(A, B, C);
}

void determineTrianlgeType(int A, int B, int C) {
    int sum = A + B + C;

    if (sum != 180) {
        cout << "Error";
    }
    else if (A == B && B == C) {
        cout << "Equilateral";
    }
    else if (A == B || A == C || B == C) {
        cout << "Isosceles";
    }
    else {
        cout << "Scalene";
    }
}