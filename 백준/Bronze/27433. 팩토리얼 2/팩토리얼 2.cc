#include <iostream>
#include <algorithm>
using namespace std;

long long int factorial(int number);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int number;
    cin >> number;

    long long factorialResult = factorial(number);
    cout << factorialResult;
}

long long int factorial(int number) {
    if (number <= 1) {
        return 1;
    }
    return number * factorial(number - 1);
}