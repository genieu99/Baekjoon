#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void calculateBridgeCombination(int west, int east);
long long factorial(int number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase;
    cin >> testcase;
    
    for (int i = 0; i < testcase; i++) {
        int west, east;
        cin >> west >> east;

        calculateBridgeCombination(west, east);
    }
}

void calculateBridgeCombination(int west, int east) {
    long long bridge = 1;
    int r = 1;

    for (int i = east; i > east - west; i--) {
        bridge *= i;
        bridge /= r++;
    }

    cout << bridge << "\n";
}