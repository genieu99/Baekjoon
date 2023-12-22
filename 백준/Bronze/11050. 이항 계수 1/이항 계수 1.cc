#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void calculateBinomialCoefficient(int n, int k);
int factorial(int number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    calculateBinomialCoefficient(n, k);
}

void calculateBinomialCoefficient(int n, int k) {
    int binomialCoefficient;
    binomialCoefficient = factorial(n) / (factorial(k) * factorial(n - k));
    cout << binomialCoefficient;
}

int factorial(int number) {
    if (number <= 1) {
        return 1;
    }
    return number * factorial(number - 1);
}