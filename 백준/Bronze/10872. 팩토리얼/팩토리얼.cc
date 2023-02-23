#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int factorial(int number);

int main() {
    int number, result;
    cin >> number;

    result = factorial(number);
    cout << result;
}

int factorial(int number) {
    if (number <= 1) {
        return 1;
    }
    return number * factorial(number-1);
}